#include "s21_smart_calc.h"

int main() {
    lexems_t *res = NULL;
    lexems_t *buf = NULL;
    const char *src = "5-7";
    res = parcer(src);
    if (!res) printf("no");
    transpose_struct(&buf, res);
    test = OPN(buf);
    printf("%f", res);
    return 0;
}
