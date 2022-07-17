#include "s21_smart_calc.h"

int main() {
    lexems_t *res = NULL;
    lexems_t *buf = NULL;
    const char *src = "1.111111-4";
    res = parcer(src);
    if (!res) printf("no");
    transpose_struct(&buf, res);
    res = OPN(buf);
    print_stack(res);
    return 0;
}
