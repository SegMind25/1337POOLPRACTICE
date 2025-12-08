#include <stdlib.h>
#include <stdbool.h>

// Function to check if a character is in the charset
static bool is_in_charset(char c, char *charset) {
    while (*charset) {
        if (c == *charset++) {
            return true;
        }
    }
    return false;
}

// Function to count the number of substrings
static int count_substrings(char *str, char *charset) {
    int count = 0;
    bool in_substring = false;

    while (*str) {
        if (is_in_charset(*str, charset)) {
            in_substring = false;
        } else {
            if (!in_substring) {
                count++;
                in_substring = true;
            }
        }
        str++;
    }
    return count;
}

// Function to get the length of a substring
static int substring_length(char *str, char *charset) {
    int length = 0;
    while (*str && !is_in_charset(*str, charset)) {
        length++;
        str++;
    }
    return length;
}

// Function to split the string
char **ft_split(char *str, char *charset) {
    int i = 0;
    int substrings_count;
    char **result;
    char *start;

    substrings_count = count_substrings(str, charset);
    result = (char **)malloc((substrings_count + 1) * sizeof(char *));
    if (!result) {
        return NULL;
    }

    while (*str) {
        if (!is_in_charset(*str, charset)) {
            start = str;
            int len = substring_length(str, charset);
            result[i] = (char *)malloc((len + 1) * sizeof(char));
            if (!result[i]) {
                while (i > 0) {
                    free(result[--i]);
                }
                free(result);
                return NULL;
            }
            for (int j = 0; j < len; j++) {
                result[i][j] = start[j];
            }
            result[i][len] = '\0';
            i++;
            str += len;
        } else {
            str++;
        }
    }
    result[i] = NULL;
    return result;
}
