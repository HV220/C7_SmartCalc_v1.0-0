#include "s21_smart_calc.h"

lexems_t* parcer(const char* str) {
    int error = 0;
    int l_check = 0;
    int r_check = 0;
    if (!str) return NULL;
    lexems_t* stack = NULL;
    for (int i = 0; str[i] && str[i] != '\n'; i++) {
        if (str[i] == '(' && check_sign(str[i + 1])) {
            int tmp = check_sign(str[i + 1]);
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
            push_sign(&stack, check_sign(str[i]));
        }
        if (str[i] == '(') {
            push(&stack, 0, 15, 6);
            l_check++;
        }
        if (str[i] == ')') {
            push(&stack, 0, 16, 6);
            r_check++;
        }
        if (str[i] == 'm') {
            char* buf = strstr(str + i, "mod");
            if (buf != str + i) {
                error = 3;
                free(buf);
                break;
            }
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
        if (check_func(str + i)) {
            int check = check_func(str + i);
            if (check == 20) {
                error = 4;
                break;
            }
            change_position_func(check, &i);
            push(&stack, 0, check, 4);
        }
        if (str[i] == 'x') push(&stack, 0, 17, 0);
    }

    if (error || (r_check != l_check)) {
        while (stack) clear_stack(&stack);
        return NULL;
    }
    return stack;
}
