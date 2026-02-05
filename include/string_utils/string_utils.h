#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stddef.h>

/**
 * String utility library
 * Provides common string manipulation functions
 */

/**
 * Reverse a string in place
 * @param str The string to reverse
 */
void str_reverse(char *str);

/**
 * Convert a string to uppercase
 * @param str The string to convert
 */
void str_to_upper(char *str);

/**
 * Convert a string to lowercase
 * @param str The string to convert
 */
void str_to_lower(char *str);

/**
 * Trim leading and trailing whitespace from a string
 * Note: This function modifies the string in place by writing a null terminator
 * @param str The string to trim
 * @return Pointer to the trimmed string (same buffer, potentially different start)
 */
char* str_trim(char *str);

/**
 * Count occurrences of a character in a string
 * @param str The string to search
 * @param ch The character to count
 * @return Number of occurrences
 */
int str_count_char(const char *str, char ch);

#endif /* STRING_UTILS_H */
