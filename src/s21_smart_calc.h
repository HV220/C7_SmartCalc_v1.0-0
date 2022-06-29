#ifndef SRC_S21_SMART_CALC_H_
#define SRC_S21_SMART_CALC_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    Cos = 1,
    Sin = 2,
    Tan = 3,
    Acos = 4,
    Asin = 5,
    Atan = 6,
    Sqrt = 7,
    Ln = 8,
    Log = 9,
    Sum = 10,
    Sub = 11,
    Mul = 12,
    Division = 13,
    Mod = 14,
    l_parenthese = 15,
    r_parenthese = 16,
    x = 17,
    num = 18,
    Dev = 19
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

int parcer(char* str, lexems_t** stack);
void push(lexems_t** head, double value, int type, int priority);
void transpose_struct(lexems_t** dev, lexems_t* sourse);
lexems_t* pop(lexems_t** head);
int peek(const lexems_t* head);
int check_sign(char sign);
void print_stack(lexems_t* head);
void clear_stack(lexems_t** head);
char* check_number(char* str, int* i, int* error);
int is_num(char* str);
int check_func(char* str, int* i);
void change_position_func(int check, int* i);
int get_size_struct(lexems_t* dev);
void init_struct(lexems_t** sourse);
lexems_t* delete_struct(lexems_t* val, lexems_t* sourse);
// OPN
int OPN(lexems_t* sourse, lexems_t** result);
double calc_values(double a, double b, int sign);
double calc_func(lexems_t* signs, lexems_t* nums);
#endif  //  SRC_S21_SMART_CALC_H_
