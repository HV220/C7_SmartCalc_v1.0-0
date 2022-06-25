#ifndef SRC_S21_SMART_CALC_H_
#define SRC_S21_SMART_CALC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    cos = 1,
    sin = 2,
    tan = 3,
    acos = 4,
    asin = 5,
    atan = 6,
    sqrt = 7,
    ln = 8,
    log = 9,
    sum = 10,
    sub = 11,
    mul = 12,
    division = 13,
    mod = 14,
    l_parenthese = 15,
    r_parenthese = 16,
    x = 17,
    num = 18,
    dev = 19
} lexems_type_t;

typedef struct lexems {
    double value;
    int priority;
    struct lexems* next;
    lexems_type_t type;
} lexems_t;

// priority
// 0 - x
// 1 - +-
// 2 - */mod
// 3 - ^
// 4 - sin,cos and other

// validation

// int check_str(char* str);
// int check_number(char* str, int* i);
// char* str_clear(char* str, char tmp);
// int check_parentheses(char* str);
// int check_check_str(char* str);
// // void init_struct(tEnum* check);
// int check_cos_and_other(char* str);
// int validation_cos_and_other(char* str, int* i, int tmp);
// int help_func_cos_and_other(char* str, int* begin, int position_num);
// // int check_unar_num(char* str, int* i, tEnum* correct);
// void print_error();
// int is_num(char* str);
// int is_sign(char* str);
// int is_true_operation(tEnum* correct);

//  parcer

int parcer(char* str, lexems_t* stack);
void push(lexems_t** head, double value, int type, int priority);
lexems_t* pop(lexems_t** head);
int peek(const lexems_t* head);
int check_sign(char sign);
void printStack(const lexems_t* head);
char* check_number(char* str, int* i, int* error);
int is_num(char* str);
int check_func(char* str, int* i);
void change_position_func(int check, int* i);
#endif  //  SRC_S21_SMART_CALC_H_
