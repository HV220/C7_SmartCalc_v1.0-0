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
    num = 18
} lexems_type_t;

typedef struct lexems {
    double value;
    int priority;
    struct lexems* next;
    lexems_type_t type;
} lexems_t;

// x = 0
// -+ = 1
// * / mod = 2
// ^ = 2
// sin cos = 4
// num = 5
// () = 6

//  parcer

lexems_t* parcer(char* str);
void push(lexems_t** head, double value, int type, int priority);
void transpose_struct(lexems_t** dev, lexems_t* sourse);
lexems_t* pop(lexems_t** head);
int peek(const lexems_t* head);
int check_sign(char sign);
void print_stack(lexems_t* head);
void clear_stack(lexems_t** head);
char* check_number(char* str, int* i, int* error);
int is_num(const char* str);
int check_func(char* str);
void change_position_func(int check, int* i);
int get_size_struct(lexems_t* dev);
void init_struct(lexems_t** sourse);
lexems_t* delete_struct(lexems_t* val, lexems_t* sourse);
void push_sign(lexems_t** stack, int sign);

// OPN

lexems_t* OPN(lexems_t* sourse);
double calc_values_OPN(double a, double b, int sign);
double calc_func_OPN(lexems_t* signs, lexems_t* nums);
int change_stack_operators_OPN(lexems_t** signs, lexems_t** nums);
int change_stack_parentheses_OPN(lexems_t** signs, lexems_t** nums);
int last_change_stack_OPN(lexems_t** signs, lexems_t** nums);

#endif  //  SRC_S21_SMART_CALC_H_
