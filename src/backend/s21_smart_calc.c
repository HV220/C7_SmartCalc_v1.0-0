#include "s21_smart_calc.h"

int main() {
    lexems_t *res = NULL;
    lexems_t *buf = NULL;
    char *src = "(+1)-sin(1)-sin(1)+sin(1)-cos(1)+tan(1)-(cos(1)-cos(1))-sqrt(1)-2^2";
    res = parcer(src);
    transpose_struct(&buf, res);
    res = OPN(buf);
    print_stack(res);
    return 0;
}
