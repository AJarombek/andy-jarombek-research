// Tests for Inline functions using GCC
// Author: Andrew Jarombek
// Date: 4/29/2023

#include <stdlib.h>
#include <check.h>
#include "inline_functions.c"

START_TEST (test_max_returns_larger_input) {
    int a = 2, b = 4;
    int result = max(a, b);
    ck_assert_int_eq(result, 4);
}
END_TEST

START_TEST (test_max_returns_smaller_input) {
    int a = 6, b = 3;
    int result = max(a, b);
    ck_assert_int_eq(result, 6);
}
END_TEST

START_TEST (test_max_returns_same_input) {
    int a = 5, b = 5;
    int result = max(a, b);
    ck_assert_int_eq(result, 5);
}
END_TEST

Suite* max_suite(void) {
    Suite* s;
    TCase* tc_core;

    s = suite_create("Max");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_max_returns_larger_input);
    tcase_add_test(tc_core, test_max_returns_smaller_input);
    tcase_add_test(tc_core, test_max_returns_same_input);

    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {
    int number_failed;
    Suite* s;
    SRunner* sr;

    s = max_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}