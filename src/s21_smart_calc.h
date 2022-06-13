#ifndef SRC_S21_SMART_CALC_H_
#define SRC_S21_SMART_CALC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct check_str {
    int number;
    int sign;
} check_t;

int check_str(char* str);
int check_number(char* str, int* i);
char* str_clear(char* str, char tmp);
int check_parentheses(char* str);
int check_check_str(char* str);
void init_struct(check_t* check);
int check_sign(char sign);
int check_cos_and_other(char* str);
int validation_cos_and_other(char* str, int* i, int tmp);
int help_func_cos_and_other(char* str, int* begin, int position_num);
void print_error();
#endif  //  SRC_S21_SMART_CALC_H_
