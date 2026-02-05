#include "../../include/string_utils/string_utils.h"
#include <string.h>
#include <ctype.h>

void str_reverse(char *str) {
    if (str == NULL) return;
    
    int length = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void str_to_upper(char *str) {
    if (str == NULL) return;
    
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
}

void str_to_lower(char *str) {
    if (str == NULL) return;
    
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

char* str_trim(char *str) {
    if (str == NULL) return NULL;
    
    // Trim leading whitespace
    while (isspace((unsigned char)*str)) str++;
    
    if (*str == '\0') return str;
    
    // Trim trailing whitespace
    char *end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end)) end--;
    
    // Write new null terminator
    *(end + 1) = '\0';
    
    return str;
}

int str_count_char(const char *str, char ch) {
    if (str == NULL) return 0;
    
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}
