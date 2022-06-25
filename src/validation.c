
// Скобки
// (a + b)

// Сложение
// a + b

// Вычитание
// a - b

// Умножение
// a * b

// Деление
// a / b

// Возведение в степень
// a ^ b

// Остаток от деления
// a mod b

// Унарный плюс
// +a

// Унарный минус
// -a

// errors
//  1-parenthes
//  2-unar_number
//  3-number
//  4-cos_and_other
//  5-^

// int check_str(char* str) {
//     int error = 0;
//     tEnum correct;
//     int first_validation = 0;
//     init_struct(&correct);

//     for (int i = 0; str[i] && str[i] != '\n' && error == 0; i++) {
//         if (str[i] == '(' && (str[i + 1] == '-' || str[i + 1] == '+')) {
//             if (!(is_num(str + i + 2))) {
//                 error = 2;
//             }
//             i = i + 2;
//             if ((!check_number(str, &i))) {
//                 error = 2;
//             }
//             if ((str[i] != ')')) {
//                 error = 2;
//             }
//             correct.num++;
//             i++;
//             if (!(is_true_operation(&correct))) {
//                 error = 4;
//             }
//         }
//         if ((str[i] == '(') && !error) {
//             if (!(check_parentheses(str + i))) {
//                 error = 1;
//             }
//         }
//         if (is_sign(str + i) && !error) {
//             correct.signs++;
//         }
//         if ((is_num(str + i) || str[i] == 'x') && !error) {
//             if (!check_number(str, &i)) {
//                 error = 3;
//             } else {
//                 correct.num++;
//                 i = i - 1;
//             }
//             if (str[i] == 'x') correct.num++;

//             if (!(is_true_operation(&correct))) {
//                 error = 4;
//             }
//         }
//         if ((first_validation = check_cos_and_other(str + i)) && !error) {
//             if (!validation_cos_and_other(str, &i, first_validation)) {
//                 error = 5;
//             }
//             correct.num++;
//             if (!(is_true_operation(&correct))) {
//                 error = 4;
//             }
//         }
//     }
//     if (!is_true_operation(&correct)) {
//         error = 4;
//     }

//     return error;
// }

// int validation_cos_and_other(char* str, int* i, int first_validation) {
//     int check = 0;
//     char* tmp;
//     int j = *i;
//     switch (first_validation) {
//         case 1:
//             if ((tmp = strstr(str + j, "cos(")) && tmp == str + j) {
//                 check = help_func_cos_and_other(str, &j, 3);
//             }
//             break;
//         case 2:
//             if ((tmp = strstr(str + j, "sin(")) && tmp == str + j) {
//                 check = help_func_cos_and_other(str, &j, 3);
//             }
//             break;
//         case 3:
//             if ((tmp = strstr(str + j, "sqrt(")) && tmp == str + j) {
//                 check = help_func_cos_and_other(str, &j, 4);
//             }
//             break;
//         case 4:
//             if ((tmp = strstr(str + j, "tan(")) && tmp == str + j) {
//                 check = help_func_cos_and_other(str, &j, 3);
//             }
//             break;
//         case 5:
//             if ((tmp = strstr(str + j, "acos(")) && tmp == str + j) {
//                 check = help_func_cos_and_other(str, &j, 4);
//             }
//             break;
//         case 6:
//             if ((tmp = strstr(str + j, "asin(")) && tmp == str + j) {
//                 check = help_func_cos_and_other(str, &j, 4);
//             }
//             break;
//         case 7:
//             if ((tmp = strstr(str + j, "atan(")) && tmp == str + j) {
//                 check = help_func_cos_and_other(str, &j, 4);
//             }
//             break;
//         case 8:
//             if ((tmp = strstr(str + j, "ln(")) && tmp == str + j) {
//                 check = help_func_cos_and_other(str, &j, 2);
//             }
//             break;
//         case 9:
//             if ((tmp = strstr(str + j, "log(")) && tmp == str + j) {
//                 check = help_func_cos_and_other(str, &j, 3);
//             }
//             break;
//         default:
//             break;
//     }
//     *i = j;
//     return check;
// }

// int help_func_cos_and_other(char* str, int* begin, int position_num) {
//     int check = 0;
//     int j = *begin + position_num;
//     int tmp = 0;
//     printf("\n%s\n", str + j);
//     check = check_str(str + j);
//     if (!check) {
//         check = 1;
//     } else {
//         check = 0;
//     }
//     for (; str[j] && str[j] != ')' && check > 0; j++) {
//     }
//     *begin = j;
//     return check;
// }

// int check_parentheses(char* str) {
//     int check = 0;
//     int tmp = 1;
//     for (int i = 0; str[i] && str[i] != '\n' && tmp > 0; i++) {
//         if (str[i] == '(') {
//             for (int j = i + 1; str[j] && str[j] != '\n'; j++) {
//                 {
//                     if (str[j] == '(') {
//                         tmp = 0;
//                         break;
//                     }
//                     if (str[j] == ')') {
//                         tmp = 0;
//                         check = 1;
//                         break;
//                     }
//                 }
//             }
//         }
//         if (str[i] == ')') {
//             break;
//         }
//     }
//     return check;
// }

// int check_cos_and_other(char* str) {
//     int check = 0;
//     switch (*str) {
//         case 'c':
//             check = 1;
//             break;
//         case 's':
//             if (*(str + 1) == 'i') {
//                 check = 2;
//             } else if (*(str + 1) == 'q') {
//                 check = 3;
//             } else {
//                 check = 10;
//             }
//             break;
//         case 't':
//             check = 4;
//             break;
//         case 'a':
//             if (*(str + 1) == 'c') {
//                 check = 5;
//             } else if (*(str + 1) == 's') {
//                 check = 6;
//             } else if (*(str + 1) == 't') {
//                 check = 7;
//             } else {
//                 check = 10;
//             }
//             break;
//         case 'l':
//             if (*(str + 1) == 'n') {
//                 check = 8;
//             } else if (*(str + 1) == 'o') {
//                 check = 9;
//             } else {
//                 check = 10;
//             }
//             break;
//     }
//     return check;
// }

// int check_number(char* str, int* i) {
//     int error = 1;
//     int j = *i;
//     for (; str[j] && str[j] != '\n' && error > 0; j++) {
//         if (!is_num(str + j)) {
//             if (str[j] == '.') {
//                 if (!is_num(str + (j + 1))) {
//                     error = 0;
//                     break;
//                 }
//             } else {
//                 break;
//             }
//         }
//     }
//     *i = j;
//     return error;
// }

// void init_struct(tEnum* correct) {
//     if (correct) {
//         correct->acos = 0;
//         correct->asin = 0;
//         correct->atan = 0;
//         correct->cos = 0;
//         correct->dev = 0;
//         correct->div = 0;
//         correct->l_parenthese = 0;
//         correct->r_parenthese = 0;
//         correct->ln = 0;
//         correct->log = 0;
//         correct->mod = 0;
//         correct->mul = 0;
//         correct->num = 0;
//         correct->signs = 0;
//     }
// }

// void print_error() {
//     printf("INVALID EXPRESSION\n");
// }

// int is_num(char* str) {
//     return (('0' <= *str) && (*str <= '9')) ? 1 : 0;
// }

// int is_sign(char* str) {
//     return (*str == '+' || *str == '-' || *str == '*' || *str == '/') ? 1 : 0;
// }

// int is_true_operation(tEnum* correct) {
//     return (correct->num > correct->signs) ? 1 : 0;
// }