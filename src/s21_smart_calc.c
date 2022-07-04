#include "s21_smart_calc.h"

int main() {
    lexems_t *res = NULL;
    lexems_t *buf = NULL;
    double count = sqrt(1) - pow(2, 2) / (4 + 1 - 1 * 23 * 5 / 4 / 6);
    char *src = "(+1)-sin(1)-sin(1)+sin(1)-cos(1)+tan(1)-(cos(1)-cos(1))-sqrt(1)-2^2/(4+1-1*23*5/4/6)/((cos(1)+cos(2))/(1+2+3))/7";
    res = parcer(src);
    transpose_struct(&buf, res);
    res = OPN(buf);
    print_stack(res);
    // printf("%lf", count);
    return 0;
}
///(4+1-1*23*5/4/6)
// x = 0
// -+ = 1
// * / mod = 2
// ^ = 3
// sin cos = 4
// num = 5
// () = 6
