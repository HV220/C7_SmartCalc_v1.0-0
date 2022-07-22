#include <check.h>

#include "s21_smart_calc.h"

START_TEST(s21_parser_test) {
    char *str = "12+1(";
    lexems_t *tmp = NULL;
    tmp = parcer(str);
    ck_assert_ptr_eq(tmp, NULL);
    str =
        "cos(10)+sin(10)-tan(12)/acos(12)*asin(12)+atan(12)-2^2*ln(12)+log(9)/"
        "(-1)*(12331)("
        "2mod3(";
    tmp = parcer(str);
    ck_assert_ptr_eq(tmp, NULL);
    str = "2mo3";
    tmp = parcer(str);
    ck_assert_ptr_eq(tmp, NULL);
    while (tmp) clear_stack(&tmp);
}
END_TEST

START_TEST(s21_OPN_test) {
    lexems_t *res = NULL;
    lexems_t *buf = NULL;
    int error = 0;
    char *src =
        "(+1)-sin(1)-sin(1)+sin(1)-cos(1)+tan(1)-(cos(1)-cos(1))-sqrt(1)-2^2/"
        "(4+1-1*23*5/4/6)/((cos(1)+cos(2))/(1+2+3))/7";
    res = parcer(src);
    transpose_struct(&buf, res);
    double test = OPN(buf, &error);
    ck_assert_double_eq_tol(test, -132.3770670067721922, 1e-7);
    while (res) clear_stack(&res);
    while (buf) clear_stack(&buf);
    src = "(-1)+2+log(1)";
    res = parcer(src);
    transpose_struct(&buf, res);
    test = OPN(buf, &error);
    ck_assert_double_eq_tol(test, (double)1, 1e-7);
    while (res) clear_stack(&res);
    while (buf) clear_stack(&buf);
    src = "12//";
    res = parcer(src);
    transpose_struct(&buf, res);
    test = OPN(buf, &error);
    ck_assert_double_eq_tol(test, (double)1, 1e-7);
    while (res) clear_stack(&res);
    while (buf) clear_stack(&buf);
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
