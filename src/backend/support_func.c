#include "s21_smart_calc.h"

double calc_values_OPN(double a, double b, int sign) {
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

double calc_func_OPN(lexems_t* signs, lexems_t* nums) {
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
        default:
            res = INFINITY;
            break;
    }
    return res;
}

int change_stack_operators_OPN(lexems_t** signs, lexems_t** nums) {
    if ((*signs) == NULL) return 4;
    if ((*nums) == NULL) return 1;

    if ((*signs)->priority == 4) {
        double res = calc_func_OPN(*signs, *nums);
        if (isnan(res)) return 4;
        clear_stack(nums);
        push(nums, res, 18, 5);
        clear_stack(signs);
    } else {
        if ((*nums) == NULL) return 1;
        double b = (*nums)->value;
        clear_stack(nums);
        if ((*nums) == NULL) return 1;
        double a = (*nums)->value;
        clear_stack(nums);
        push(nums, calc_values_OPN(a, b, (*signs)->type), 18, 5);
        clear_stack(signs);
    }
    return 0;
}

int change_stack_parentheses_OPN(lexems_t** signs, lexems_t** nums) {
    while (*signs) {
        if ((*signs)->type == 15) {
            clear_stack(signs);
            if ((*signs) && (*signs)->priority == 4) {
                double res = calc_func_OPN(*signs, *nums);
                if (isnan(res)) return 4;
                clear_stack(nums);
                push(nums, res, 18, 5);
                clear_stack(signs);
            }
            break;
        } else {
            double b = (*nums)->value;
            clear_stack(nums);
            if ((*nums) == NULL) return 1;
            double a = (*nums)->value;
            clear_stack(nums);
            push(nums, calc_values_OPN(a, b, (*signs)->type), 18, 5);
            clear_stack(signs);
        }
    }
    return 0;
}

int last_change_stack_OPN(lexems_t** signs, lexems_t** nums) {
    while (*signs) {
        if ((*signs)->priority == 6) return 6;
        if ((*signs)->priority == 4) {
            double res = calc_func_OPN(*signs, *nums);
            clear_stack(nums);
            push(nums, res, 17, 5);
            clear_stack(signs);
        } else {
            if (!*nums) return 1;
            double b = (*nums)->value;
            clear_stack(nums);
            if (!*nums) return 1;
            double a = (*nums)->value;
            clear_stack(nums);
            push(nums, calc_values_OPN(a, b, (*signs)->type), 18, 5);
            clear_stack(signs);
        }
    }
    return 0;
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

int check_func(const char* str) {
    int check = 0;
    switch (*str) {
        case 'c':
            if (strstr(str, "cos") == str)
                check = 1;
            else
                check = 20;
            break;
        case 's':
            if (strstr(str, "sin") == str)
                check = 2;
            else if (strstr(str, "sqrt") == str)
                check = 7;
            else
                check = 20;
            break;
        case 't':
            if (strstr(str, "tan") == str)
                check = 3;
            else
                check = 20;
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
            break;
        case 'l':
            if (strstr(str, "ln") == str)
                check = 8;
            else if (strstr(str, "log") == str)
                check = 9;
            else
                check = 20;
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

int is_num(const char* str) { return (('0' <= *str) && (*str <= '9')) ? 1 : 0; }

void print_stack(lexems_t* head) {
    if (!head) return;
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

char* check_number(const char* str, int* i, int* error) {
    *error = 0;
    int j = *i;
    int calc = 0;
    char* res = (char*)calloc(calc, (sizeof(char)));
    if (!res) return NULL;
    for (; str[j] && str[j] != '\n' && !(*error); j++, calc++) {
        if (!is_num(str + j)) {
            if (str[j] == '.') {
                if (!is_num(str + (j + 1))) {
                    *error = 5;
                    break;
                }
            } else {
                break;
            }
        }
        res[calc] = str[j];
        res = (char*)realloc(res, (calc + 1) * (sizeof(char)));
    if(!res) break;
    }
    if(res) {
        if(*error) {
            free(res); return NULL; } else {
        res[calc] = '\0';
        *i = j;
        return res; }
    } else {
        *error = 5;
        return NULL;
    }
}

void transpose_struct(lexems_t** dev, lexems_t* sourse) {
    while (sourse) {
        push(dev, sourse->value, sourse->type, sourse->priority);
        sourse = sourse->next;
    }
}

void push_sign(lexems_t** stack, int sign) {
    switch (sign) {
        case 10:
            push(stack, 0, sign, 1);
            break;
        case 11:
            push(stack, 0, sign, 1);
            break;
        case 12:
            push(stack, 0, sign, 2);
            break;
        case 13:
            push(stack, 0, sign, 2);
            break;
        default:
            push(stack, 0, sign, 3);
            break;
    }
}
