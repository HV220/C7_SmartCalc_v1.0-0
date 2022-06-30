
#include <check.h>

#include "s21_smart_calc.h"

START_TEST(s21_parser_test) {
}
END_TEST

START_TEST(s21_OPN_test) {
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