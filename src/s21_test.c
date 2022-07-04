#include <check.h>

#include "s21_smart_calc.h"

START_TEST(s21_parser_test) {
    char *str = "12+1(";
    ck_assert_ptr_eq(parcer(str), NULL);
    str =
        "cos(10)+sin(10)-tan(12)/acos(12)*asin(12)+atan(12)-2^2*ln(12)+log(9)/"
        "(-1)*(12331)("
        "2mod3(";
    ck_assert_ptr_eq(parcer(str), NULL);
    str = "2mo3";
    ck_assert_ptr_eq(parcer(str), NULL);
}
END_TEST

START_TEST(s21_OPN_test) {
    lexems_t *res = NULL;
    lexems_t *buf = NULL;
    char *src = "(+1)-sin(1)-sin(1)+sin(1)-cos(1)+tan(1)-(cos(1)-cos(1))-sqrt(1)-2^2/(4+1-1*23*5/4/6)/((cos(1)+cos(2))/(1+2+3))/7";
    res = parcer(src);
    transpose_struct(&buf, res);
    res = OPN(buf);
    ck_assert_double_eq_tol(res->value, -132.3770670067721922, 1e-7);
}
END_TEST

int main() {
    Suite *suite = suite_create("S21_test_smart_calc");
    SRunner *srunner = srunner_create(suite);

    TCase *s21_parser_case = tcase_create("s21_parser_case");
    suite_add_tcase(suite, s21_parser_case);
    tcase_add_test(s21_parser_case, s21_parser_test);

    TCase *s21_OPN_case = tcase_create("s21_OPN_case");
    suite_add_tcase(suite, s21_OPN_case);
    tcase_add_test(s21_OPN_case, s21_OPN_test);

    srunner_run_all(srunner, CK_VERBOSE);
    int numbers_errors = srunner_ntests_failed(srunner);
    srunner_free(srunner);
    return (numbers_errors) ? EXIT_FAILURE : EXIT_SUCCESS;
}