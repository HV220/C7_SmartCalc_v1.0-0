#include "s21_smart_calc.h"

int main() {
    char *str = "2mod3";
    lexems_t *stack_p = parcer(str);
    if (!stack_p) {
        printf("Invalid\n");
        exit(1);
    }
    lexems_t *buf_p = NULL;
    transpose_struct(&buf_p, stack_p);
    stack_p = OPN(buf_p);
    if (!stack_p) {
        printf("Invalid\n");
        exit(1);
    }
    print_stack(stack_p);
    return 0;
}

// x = 0
// -+ = 1
// * / mod = 2
// ^ = 3
// sin cos = 4
// num = 5
// () = 6
