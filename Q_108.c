#include <stdio.h>

void copyString(char *dest, const char *src) {
    while (*src!='\0') {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int compareStrings(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return *str1 - *str2; 
        }
        str1++;
        str2++;
    }
    return *str1 - *str2; 
}

void concatenateStrings(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

void reverseString(char *str) {
    int len = 0;
    char *end = str;

    while (*end) {
        len++;
        end++;
    }
    end--;

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = *end;
        *end = temp;
        end--;
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    copyString(str2, str1);
    printf("Copied string: %s\n", str2);

    printf("Enter two strings to compare: ");
    scanf("%s %s", str1, str2);
    int result = compareStrings(str1, str2);
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("First string is lexicographically smaller\n");
    } else {
        printf("Second string is lexicographically smaller\n");
    }

    
    printf("Enter two strings to concatenate: ");
    scanf("%s %s", str1, str2);
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    reverseString(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}