#include "s21_smart_calc.h"

int main() {
    char* str = "cos(sin(tan(10)))-123123+12^2-2mod3";
    // cos(11
    lexems_t* stack_p = NULL;
    lexems_t* buf_p = NULL;
    printf("error: %d\n", parcer(str, &stack_p));
    transpose_struct(&buf_p, stack_p);
    OPN(buf_p, &stack_p);
    return 0;
}

// x = 0
// -+ = 1
// * / mod = 2
// ^ = 3
// sin cos = 4
// num = 5
// () = 6

int parcer(char* str, lexems_t** stack) {
    int error = 0;
    int tmp = 0;
    for (int i = 0; str[i] && str[i] != '\n'; i++) {
        if (str[i] == '(' && (tmp = check_sign(str[i + 1]))) {
            if (tmp == 12 || tmp == 13 || tmp == 19) {
                error = 2;
                break;
            }
            if (!(is_num(str + i + 2))) {
                error = 5;
                break;
            }
            i = i + 2;
            char* buf = check_number(str, &i, &error);
            if (error) break;
            if ((str[i] != ')')) {
                error = 2;
                break;
            }
            if (tmp == 11) {
                char* buf_sub = (char*)malloc(strlen(buf) + 1 * sizeof(char));
                buf_sub[0] = '-';
                memcpy(buf_sub + 1, buf, strlen(buf));
                double res = atof(buf_sub);
                push(stack, res, 18, 5);
                free(buf);
                free(buf_sub);
            } else {
                double res = atof(buf);
                push(stack, res, 18, 5);
                free(buf);
            }
            i++;
        }
        if (check_sign(str[i])) {
            int res = check_sign(str[i]);
            switch (res) {
                case 10:
                    push(stack, 0, res, 1);
                    break;
                case 11:
                    push(stack, 0, res, 1);
                    break;
                case 12:
                    push(stack, 0, res, 2);
                    break;
                case 13:
                    push(stack, 0, res, 2);
                    break;
                default:
                    push(stack, 0, res, 3);
                    break;
            }
        }
        if (str[i] == '(') push(stack, 0, 15, 6);
        if (str[i] == ')') push(stack, 0, 16, 6);
        if (str[i] == 'm') {
            char* buf = strstr(str + i, "mod");
            if (buf != str + i) {
                error = 3;
                free(buf);
                break;
            }
            push(stack, 0, 14, 2);
            i = i + 2;
        }
        if (is_num(str + i)) {
            char* buf = check_number(str, &i, &error);
            if (error) break;
            push(stack, atof(buf), 18, 5);
            free(buf);
            i--;
        }
        if ((tmp = check_func(str + i, &i))) {
            if (tmp == 20) {
                error = 4;
                break;
            }
            push(stack, 0, tmp, 4);
        }
        if (str[i] == 'x') push(stack, 0, 17, 0);
    }
    if (error) clear_stack(stack);
    return error;
}

void push(lexems_t** head, double value, int type, int priority) {
    lexems_t* tmp = malloc(sizeof(lexems_t));
    if (tmp == NULL) {
        exit(1);
    }
    tmp->next = *head;
    tmp->value = value;
    tmp->type = type;
    tmp->priority = priority;
    *head = tmp;
}

lexems_t* pop(lexems_t** head) {
    lexems_t* out;
    if ((*head) == NULL) {
        return NULL;
    }
    out = *head;
    *head = (*head)->next;
    return out;
}

int peek(const lexems_t* head) {
    if (head == NULL) {
        exit(1);
    }
    return head->priority;
}
int check_func(char* str, int* i) {
    int check = 0;
    switch (*str) {
        case 'c':
            if (strstr(str, "cos(") != str)
                check = 20;
            else
                check = 1;
            change_position_func(check, i);
            break;
        case 's':
            if (strstr(str, "sin(") == str)
                check = 2;
            else if (strstr(str, "sqrt(") == str)
                check = 7;
            else
                check = 20;
            change_position_func(check, i);
            break;
        case 't':
            if (strstr(str, "tan(") == str)
                check = 3;
            else
                check = 20;
            change_position_func(check, i);
            break;
        case 'a':
            if (strstr(str, "acos(") == str)
                check = 4;
            else if (strstr(str, "asin(") == str)
                check = 5;
            else if (strstr(str, "atan(") == str)
                check = 6;
            else
                check = 20;
            change_position_func(check, i);
            break;
        case 'l':
            if (strstr(str, "ln(") == str)
                check = 8;
            else if (strstr(str, "log(") == str)
                check = 9;
            else
                check = 20;
            change_position_func(check, i);
            break;
    }
    return check;
}

void change_position_func(int check, int* i) {
    if (check == 1) *i = *i + 2;
    if (check == 2) *i = *i + 2;
    if (check == 7) *i = *i + 3;
    if (check == 3) *i = *i + 2;
    if (check == 4) *i = *i + 3;
    if (check == 5) *i = *i + 3;
    if (check == 6) *i = *i + 3;
    if (check == 8) *i = *i + 1;
    if (check == 9) *i = *i + 2;
}

int is_num(char* str) { return (('0' <= *str) && (*str <= '9')) ? 1 : 0; }

void print_stack(lexems_t* head) {
    lexems_t* buf_priority = head;
    lexems_t* buf_type = head;
    printf("value-> ");
    while (head) {
        printf("%lf ", head->value);
        head = head->next;
    }
    printf("\n");
    printf("priority-> ");
    while (buf_priority) {
        printf("%d ", buf_priority->priority);
        buf_priority = buf_priority->next;
    }
    printf("\n");
    printf("type-> ");
    while (buf_type) {
        printf("%d ", buf_type->type);
        buf_type = buf_type->next;
    }
    printf("\n");
}

void clear_stack(lexems_t** head) {
    if (*head == NULL) {
        return;
    }

    lexems_t* buf = *head;
    *head = (*head)->next;
    free(buf);
}

int check_sign(char ch) {
    int res = 0;
    switch (ch) {
        case '+':
            res = 10;
            break;
        case '-':
            res = 11;
            break;
        case '*':
            res = 12;
            break;
        case '/':
            res = 13;
            break;
        case '^':
            res = 19;
            break;
    }
    return res;
}

char* check_number(char* str, int* i, int* error) {
    *error = 0;
    int j = *i;
    int calc = 0;
    char* res = (char*)malloc(calc * (sizeof(char)));
    for (; str[j] && str[j] != '\n' && !(*error); j++, calc++) {
        if (!is_num(str + j)) {
            if (str[j] == '.') {
                if (!is_num(str + (j + 1))) {
                    *error = 5;
                    free(res);
                    break;
                }
            } else {
                break;
            }
        }
        res[calc] = str[j];
        res = (char*)realloc(res, (calc + 1) * (sizeof(char)));
    }
    res[calc] = '\0';
    *i = j;
    return res;
}

void transpose_struct(lexems_t** dev, lexems_t* sourse) {
    while (sourse) {
        push(dev, sourse->value, sourse->type, sourse->priority);
        sourse = sourse->next;
    }
}

int get_size_struct(lexems_t* dev) {
    int calc = 0;
    while (dev) {
        calc++;
        dev = dev->next;
    }
    return calc;
}

int OPN(lexems_t* sourse, lexems_t** result) {
    int error = 0;
    lexems_t* nums = NULL;
    lexems_t* signs = NULL;
    // x = 0
    // -+ = 1
    // * / mod = 2
    // ^ = 2
    // sin cos = 4
    // num = 5
    // () = 6
    while (sourse) {
        if (sourse->type == 18) {
            push(&nums, sourse->value, sourse->type, sourse->priority);
        } else {
            if (!signs) {
                push(&signs, sourse->value, sourse->type, sourse->priority);
            } else {
                if (sourse->priority <= signs->priority && signs->priority != 6) {
                    if (!nums) {
                        error = 1;
                        break;
                    }
                    if (signs->priority == 4) {
                        double res = calc_func(signs, nums);
                        if (isnan(res)) {
                            error = 4;
                            break;
                        }
                        clear_stack(&nums);
                        push(&nums, res, 17, 5);
                        clear_stack(&signs);
                    } else {
                        double b = nums->value;
                        clear_stack(&nums);
                        double a = nums->value;
                        clear_stack(&nums);
                        push(&nums, calc_values(a, b, signs->type), 18, 5);
                        clear_stack(&signs);
                    }
                }
                if (sourse->priority == 6) {
                    if (sourse->type == 15) {
                        push(&signs, sourse->value, sourse->type, sourse->priority);
                    }
                    if (sourse->type == 16) {
                        if (!nums) {
                            error = 1;
                            break;
                        }
                        if (signs->type == 15) {
                            clear_stack(&signs);
                            double res = calc_func(signs, nums);
                            if (isnan(res)) {
                                error = 4;
                                break;
                            }
                            clear_stack(&nums);
                            push(&nums, res, 17, 5);
                            clear_stack(&signs);
                        } else if (signs->priority == 4) {
                            double res = calc_func(signs, nums);
                            clear_stack(&signs);
                            clear_stack(&nums);
                            if (isnan(res)) {
                                error = 4;
                                break;
                            }
                            push(&nums, res, 17, 5);
                            clear_stack(&signs);
                        } else {
                            double b = nums->value;
                            clear_stack(&nums);
                            if (!nums) {
                                error = 1;
                                break;
                            }
                            double a = nums->value;
                            clear_stack(&nums);
                            push(&nums, calc_values(a, b, signs->type), 18, 5);
                            clear_stack(&signs);
                            clear_stack(&signs);
                        }
                    }
                } else {
                    push(&signs, sourse->value, sourse->type, sourse->priority);
                }
            }
        }
        sourse = sourse->next;
    }

    while (signs) {
        if (!nums) {
            error = 1;
            break;
        }
        if (signs->priority == 4) {
            double res = calc_func(signs, nums);
            if (isnan(res)) {
                error = 4;
                break;
            }
            clear_stack(&nums);
            push(&nums, res, 17, 5);
            clear_stack(&signs);
        } else {
            double b = nums->value;
            clear_stack(&nums);
            double a = nums->value;
            clear_stack(&nums);
            push(&nums, calc_values(a, b, signs->type), 18, 5);
            clear_stack(&signs);
        }
    }

    print_stack(nums);
    return 0;
}

double calc_values(double a, double b, int sign) {
    double res = 0;
    switch (sign) {
        case 10:
            res = a + b;
            break;
        case 11:
            res = a - b;
            break;
        case 12:
            res = a * b;
            break;
        case 13:
            res = a / b;
            break;
        case 19:
            res = pow(a, b);
            break;
        case 14:
            res = fmod(a, b);
            break;
    }
    return res;
}
double calc_func(lexems_t* signs, lexems_t* nums) {
    double res;
    switch (signs->type) {
        case 1:
            res = cos(nums->value);
            break;
        case 2:
            res = sin(nums->value);
            break;
        case 3:
            res = tan(nums->value);
            break;
        case 4:
            res = acos(nums->value);
            break;
        case 5:
            res = asin(nums->value);
            break;
        case 6:
            res = atan(nums->value);
            break;
        case 7:
            res = sqrt(nums->value);
            break;
        case 8:
            res = log(nums->value);
            break;
        case 9:
            res = log(nums->value);
            break;
    }
    return res;
}
