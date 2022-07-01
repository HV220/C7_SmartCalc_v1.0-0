#include "s21_smart_calc.h"

lexems_t* OPN(lexems_t* sourse) {
    int error = 0;
    lexems_t* nums = NULL;
    lexems_t* signs = NULL;
    if (!sourse) return NULL;
    while (sourse) {
        if (sourse->type == 18) {
            push(&nums, sourse->value, sourse->type, sourse->priority);
        } else {
            if (!signs) {
                push(&signs, sourse->value, sourse->type, sourse->priority);
            } else {
                if (sourse->priority <= signs->priority &&
                    signs->priority != 6) {
                    if (change_stack_operators_OPN(&signs, &nums)) {
                        error = 1;
                        break;
                    }
                }
                if (sourse->priority == 6) {
                    if (sourse->type == 15) {
                        push(&signs, sourse->value, sourse->type,
                             sourse->priority);
                    }
                    if (sourse->type == 16) {
                        if (change_stack_parentheses_OPN(&signs, &nums)){error = 5; break;}

                    }
                } else {
                    push(&signs, sourse->value, sourse->type, sourse->priority);
                }
            }
        }
        sourse = sourse->next;
    }
    if (error || last_change_stack_OPN(&signs, &nums)) {
        while (nums) clear_stack(&nums);
        while (signs) clear_stack(&signs);
        return NULL;
    } else {
        while (signs) clear_stack(&nums);
        return nums;
    }
}