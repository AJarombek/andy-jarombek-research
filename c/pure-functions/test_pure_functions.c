// Tests for Pure functions using GCC
// Author: Andrew Jarombek
// Date: 4/30/2023

#include <stdlib.h>
#include <check.h>
#include "pure_functions.c"

START_TEST(test_milesToKilometers) {
    int miles = 5;
    int expected_result = 8;
    int result = milesToKilometers(miles);
    ck_assert_int_eq(result, expected_result);
}
END_TEST

Suite *milesToKilometers_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("milesToKilometers");

    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_milesToKilometers);

    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = milesToKilometers_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
