#include "s21_smart_calc.h"

int main() {
    char* str = "sin(cos())+10";
    // int error;
    lexems_t stack;
    // int i = 0;
    // char* buf = check_number(str, &i, &error);
    printf("\n%d", parcer(str, &stack));
    // printStack(&stack);
    // printf("%s\n", buf);
    return 0;
}
// x = 0
// -+ = 1
// * / mod = 2
// ^ = 2
// sin cos = 4
// num = 5
// () = 6

int parcer(char* str, lexems_t* stack) {
    stack = NULL;
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
                push(&stack, res, 18, 5);
                free(buf);
                free(buf_sub);
            } else {
                double res = atof(buf);
                push(&stack, res, 18, 5);
                free(buf);
            }
            i++;
        }
        if (check_sign(str[i])) {
            push(&stack, 0, check_sign(str[i]), 1);
        }
        if (str[i] == '(') push(&stack, 0, 15, 6);
        if (str[i] == ')') push(&stack, 0, 16, 6);
        if (str[i] == 'm') {
            char* buf = strstr(str + i, "mod");
            if (buf != str + i) {
                error = 3;
                free(buf);
                break;
            }
            free(buf);
            push(&stack, 0, 14, 2);
            i = i + 2;
        }
        if (is_num(str + i)) {
            char* buf = check_number(str, &i, &error);
            if (error) break;
            push(&stack, atof(buf), 18, 5);
            free(buf);
            i--;
        }
        if ((tmp = check_func(str + i, &i))) {
            if (tmp == 20) {
                error = 4;
                break;
            }
            push(&stack, 0, tmp, 4);
        }
    }
    printStack(stack);
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
        exit(1);
    }
    out = *head;
    *head = (*head)->next;
    return out;
}

int peek(const lexems_t* head) {
    if (head == NULL) {
        exit(1);
    }
    return head->type;
}
int check_func(char* str, int* i) {
    int check = 0;
    switch (*str) {
        case 'c':
            if (strstr(str, "cos") != str)
                check = 20;
            else
                check = 1;
            change_position_func(check, i);
            break;
        case 's':
            if (strstr(str, "sin") == str)
                check = 2;
            else if (strstr(str, "sqrt") == str)
                check = 7;
            else
                check = 20;
            change_position_func(check, i);
            break;
        case 't':
            if (strstr(str, "tan") == str)
                check = 3;
            else
                check = 20;
            change_position_func(check, i);
            break;
        case 'a':
            if (strstr(str, "acos") == str)
                check = 4;
            else if (strstr(str, "asin") == str)
                check = 5;
            else if (strstr(str, "atan") == str)
                check = 6;
            else
                check = 20;
            change_position_func(check, i);
            break;
        case 'l':
            if (strstr(str, "ln") == str)
                check = 8;
            else if (strstr(str, "log") == str)
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

int is_num(char* str) {
    return (('0' <= *str) && (*str <= '9')) ? 1 : 0;
}

void printStack(const lexems_t* head) {
    printf("stack > ");
    while (head) {
        printf("%d ", head->type);
        head = head->next;
    }
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
    *i = j;
    return res;
}

