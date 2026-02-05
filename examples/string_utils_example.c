#include <stdio.h>
#include <string.h>
#include "../include/string_utils/string_utils.h"

int main() {
    printf("=== String Utilities Library Demo ===\n\n");
    
    // Test str_reverse
    char str1[] = "Hello World";
    printf("Original string: %s\n", str1);
    str_reverse(str1);
    printf("Reversed string: %s\n\n", str1);
    
    // Test str_to_upper
    char str2[] = "hello world";
    printf("Original string: %s\n", str2);
    str_to_upper(str2);
    printf("Uppercase string: %s\n\n", str2);
    
    // Test str_to_lower
    char str3[] = "HELLO WORLD";
    printf("Original string: %s\n", str3);
    str_to_lower(str3);
    printf("Lowercase string: %s\n\n", str3);
    
    // Test str_trim
    char str4[] = "   Hello World   ";
    printf("Original string: '%s'\n", str4);
    char *trimmed = str_trim(str4);
    printf("Trimmed string: '%s'\n\n", trimmed);
    
    // Test str_count_char
    char str5[] = "Hello World";
    char ch = 'l';
    int count = str_count_char(str5, ch);
    printf("String: %s\n", str5);
    printf("Count of '%c': %d\n", ch, count);
    
    return 0;
}
