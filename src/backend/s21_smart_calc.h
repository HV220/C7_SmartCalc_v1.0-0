#ifndef SRC_BACKEND_S21_SMART_CALC_H_
#define SRC_BACKEND_S21_SMART_CALC_H_

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
    num = 18
} lexems_type_t;

typedef struct lexems {
    double value;
    int priority;
    struct lexems* next;
    lexems_type_t type;
} lexems_t;

//  parcer

lexems_t* parcer(const char* str);
void push(lexems_t** head, double value, int type, int priority);
void transpose_struct(lexems_t** dev, lexems_t* sourse);
lexems_t* pop(lexems_t** head);
int peek(const lexems_t* head);
int check_sign(char sign);
void print_stack(lexems_t* head);
void clear_stack(lexems_t** head);
char* check_number(const char* str, int* i, int* error);
int is_num(const char* str);
int check_func(const char* str);
void change_position_func(int check, int* i);
int get_size_struct(lexems_t* dev);
void init_struct(lexems_t** sourse);
lexems_t* delete_struct(lexems_t* val, lexems_t* sourse);
void push_sign(lexems_t** stack, int sign);

// OPN

double OPN(lexems_t* sourse);
double calc_values_OPN(double a, double b, int sign);
double calc_func_OPN(lexems_t* signs, lexems_t* nums);
int change_stack_operators_OPN(lexems_t** signs, lexems_t** nums);
int change_stack_parentheses_OPN(lexems_t** signs, lexems_t** nums);
int last_change_stack_OPN(lexems_t** signs, lexems_t** nums);
void delete_Lexem_t(lexems_t **head);
#endif  //  SRC_BACKEND_S21_SMART_CALC_H_
