#include "s21_smart_calc.h"

int main() {
    lexems_t *res;
    lexems_t *buf;
    double count = (+1)-acos(1)-asin(1)+atan(1)-sin(1)+tan(1)-(cos(1)-cos(1))-sqrt(1)-pow(2,2)/(4+1-1*23*5/4/6);
    char *src = "(+1)-acos(1)-asin(1)+atan(1)-sin(1)+tan(1)-(cos(1)-cos(1))-sqrt(1)-pow(2,2)/(4+1-1*23*5/4/6)";
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
