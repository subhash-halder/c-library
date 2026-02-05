#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../include/string_utils/string_utils.h"

void test_str_reverse() {
    char str[] = "hello";
    str_reverse(str);
    assert(strcmp(str, "olleh") == 0);
    printf("✓ test_str_reverse passed\n");
}

void test_str_to_upper() {
    char str[] = "hello";
    str_to_upper(str);
    assert(strcmp(str, "HELLO") == 0);
    printf("✓ test_str_to_upper passed\n");
}

void test_str_to_lower() {
    char str[] = "HELLO";
    str_to_lower(str);
    assert(strcmp(str, "hello") == 0);
    printf("✓ test_str_to_lower passed\n");
}

void test_str_trim() {
    char str[] = "   hello   ";
    char *trimmed = str_trim(str);
    assert(strcmp(trimmed, "hello") == 0);
    printf("✓ test_str_trim passed\n");
}

void test_str_count_char() {
    assert(str_count_char("hello", 'l') == 2);
    assert(str_count_char("world", 'o') == 1);
    assert(str_count_char("test", 'z') == 0);
    printf("✓ test_str_count_char passed\n");
}

int main() {
    printf("Running String Utils Tests...\n\n");
    
    test_str_reverse();
    test_str_to_upper();
    test_str_to_lower();
    test_str_trim();
    test_str_count_char();
    
    printf("\nAll string utils tests passed!\n");
    return 0;
}
