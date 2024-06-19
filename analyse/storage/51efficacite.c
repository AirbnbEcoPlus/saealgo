#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* rle_encode(const char* input) {
    int len = strlen(input);
    if (len == 0) return "";

    int capacity = len * 2 + 1;
    char* encoded = (char*)malloc(capacity);
    if (!encoded) return NULL;

    int index = 0;
    char current_char = input[0];
    int count = 1;

    for (int i = 1; i < len; i++) {
        if (input[i] == current_char) {
            count++;
        } else {
            index += snprintf(encoded + index, capacity - index, "%d%c", count, current_char);
            current_char = input[i];
            count = 1;
        }
    }
    snprintf(encoded + index, capacity - index, "%d%c", count, current_char);
    return encoded;
}