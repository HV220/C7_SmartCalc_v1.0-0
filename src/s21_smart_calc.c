#include "s21_smart_calc.h"

int main() {
    lexems_t *res;
    lexems_t *buf;
   double count = cos(1);
       char *src =
        "cos(1)";
    res = parcer(src);
    transpose_struct(&buf, res);
    res = OPN(buf);
    print_stack(res);
    printf("%lf", count);
    return 0;
}

// x = 0
// -+ = 1
// * / mod = 2
// ^ = 3
// sin cos = 4
// num = 5
// () = 6
