#include "s21_smart_calc.h"

int main() {
    return 0;
}

int check_check_str(char* str) {
    int error = 0;
    check_t correct;
    int first_validation = 0;
    init_struct(&correct);
    if (!check_parentheses(str)) error = 1;
    for (int i = 0; str[i] && str[i] != '\n' && error == 0; i++) {
        if (str[i] == '(' && (str[i + 1] == '-' || str[i + 1] == '+')) {
            for (int j = i + 2; str[j] && str[j] != '\n' && error == 0; j++) {
                if (('0' <= str[j]) && (str[j] <= '9')) {
                    if (check_number(str, &j)) {
                        if (str[j + 1] == ')') {
                            i = j + 1;
                            correct.number++;
                            break;
                        }
                    } else {
                        error = 1;
                    }
                } else {
                    error = 2;
                }
            }
        }
        if (str[i] == '-' || str[i] == '+' || str[i] == '/' || str[i] == '*') {
            correct.sign++;
        }
        if (('0' <= str[i]) && (str[i] <= '9')) {
            if (check_number(str, &i)) {
                correct.number++;
                if (!(correct.number % 2 == 0) && correct.number <= correct.sign) {
                    error = 3;
                }
            } else {
                error = 4;
            }
        }
        if ((first_validation = check_cos_and_other(str + i))) {
            if (first_validation == 10 || !(validation_cos_and_other(str, &i, first_validation))) {
                error = 5;
            } else {
                correct.number++;
            }
        }
    }
    if (error) {
        print_error();
    }
    if (correct.sign >= correct.number && error == 0) {
        error = 10;
        print_error();
    }
    return error;
}

int validation_cos_and_other(char* str, int* i, int first_validation) {
    int check = 0;
    char* tmp;
    int j = *i;
    switch (first_validation) {
        case 1:
            if ((tmp = strstr(str + j, "cos(")) && tmp == str + j) {
                check = help_func_cos_and_other(str, &j, 4);
            }
            break;
        case 2:
            if ((tmp = strstr(str + j, "sin(")) && tmp == str + j) {
                check = help_func_cos_and_other(str, &j, 4);
            }
            break;
        case 3:
            if ((tmp = strstr(str + j, "sqrt(")) && tmp == str + j) {
                check = help_func_cos_and_other(str, &j, 5);
            }
            break;
        case 4:
            if ((tmp = strstr(str + j, "tan(")) && tmp == str + j) {
                check = help_func_cos_and_other(str, &j, 4);
            }
            break;
        case 5:
            if ((tmp = strstr(str + j, "acos(")) && tmp == str + j) {
                check = help_func_cos_and_other(str, &j, 5);
            }
            break;
        case 6:
            if ((tmp = strstr(str + j, "asin(")) && tmp == str + j) {
                check = help_func_cos_and_other(str, &j, 5);
            }
            break;
        case 7:
            if ((tmp = strstr(str + j, "atan(")) && tmp == str + j) {
                check = help_func_cos_and_other(str, &j, 5);
            }
            break;
        case 8:
            if ((tmp = strstr(str + j, "ln(")) && tmp == str + j) {
                check = help_func_cos_and_other(str, &j, 3);
            }
            break;
        case 9:
            if ((tmp = strstr(str + j, "log(")) && tmp == str + j) {
                check = help_func_cos_and_other(str, &j, 4);
            }
            break;
        default:
            break;
    }
    *i = j;
    return check;
}
int help_func_cos_and_other(char* str, int* begin, int position_num) {
    int check = 0;
    int j = 0;
    int tmp = 0;
    for (j = *begin + position_num; str[j] && str[j] != '\n' && check == 0; j++) {
        if (('0' <= str[j]) && (str[j] <= '9')) {
            if (check_number(str, &j)) {
                if (str[j + 1] == ')') {
                    check = 1;
                    *begin = j;
                }
            }
        } else if ((tmp = check_cos_and_other(str + j))) {
            check = validation_cos_and_other(str, &j, tmp);
        }
        break;
    }
    *begin = j;
    return check;
}

int check_parentheses(char* str) {
    int left_parenthese = 0;
    int right_parenthese = 0;
    int check = 0;
    for (int i = 0; str[i] && str[i] != '\n'; i++) {
        if (str[i] == '(') {
            left_parenthese++;
        }
        if (str[i] == ')') {
            right_parenthese++;
        }
    }
    if (left_parenthese == right_parenthese) {
        check = 1;
    }
    return check;
}
int check_cos_and_other(char* str) {
    int check = 0;
    switch (*str) {
        case 'c':
            check = 1;
            break;
        case 's':
            if (*(str + 1) == 'i') {
                check = 2;
            } else if (*(str + 1) == 'q') {
                check = 3;
            } else {
                check = 10;
            }
            break;
        case 't':
            check = 4;
            break;
        case 'a':
            if (*(str + 1) == 'c') {
                check = 5;
            } else if (*(str + 1) == 's') {
                check = 6;
            } else if (*(str + 1) == 't') {
                check = 7;
            } else {
                check = 10;
            }
            break;
        case 'l':
            if (*(str + 1) == 'n') {
                check = 8;
            } else if (*(str + 1) == 'o') {
                check = 9;
            } else {
                check = 10;
            }
            break;
    }
    return check;
}

int check_number(char* str, int* i) {
    int error = 1;
    int check = 0;
    int tmp = *i;
    for (; str[tmp] && str[tmp] != '\n' && check == 0; tmp++) {
        if (('0' <= str[tmp]) && (str[tmp] <= '9')) {
        } else {
            if (str[tmp] == '.') {
                if (('0' <= str[tmp + 1]) && (str[tmp + 1] <= '9')) {
                } else {
                    error = 0;
                    check = 1;
                    return 0;
                }
            } else {
                break;
            }
        }
    }
    *i = --tmp;
    return error;
}

void init_struct(check_t* correct) {
    if (correct) {
        correct->number = 0;
        correct->sign = 0;
    }
}

void print_error() {
    printf("INVALID EXPRESSION\n");
}
