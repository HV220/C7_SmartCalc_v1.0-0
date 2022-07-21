#include "s21_smart_calc.h"

double OPN(lexems_t* sourse) {
    int error = 0;
    if (!sourse) return EXIT_FAILURE;
    lexems_t* nums = NULL;
    lexems_t* signs = NULL;

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
                        if (change_stack_parentheses_OPN(&signs, &nums)) {
                            error = 5;
                            break;
                        }
                    }
                } else {
                    push(&signs, sourse->value, sourse->type, sourse->priority);
                }
            }
        }
        sourse = sourse->next;
    }

    if (error) {
        while (nums) clear_stack(&nums);
        while (signs) clear_stack(&signs);
        return EXIT_FAILURE;
    }
    error = last_change_stack_OPN(&signs, &nums);
    if (error) {
        while (nums) clear_stack(&nums);
        while (signs) clear_stack(&signs);
        return EXIT_FAILURE;
    } else {
        double res = nums->value;
        while (signs) clear_stack(&signs);
        while (nums) clear_stack(&nums);
        return res;
    }
}
