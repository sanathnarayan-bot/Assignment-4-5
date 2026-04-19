#include <stdio.h>

// Function to copy string
void strCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int strLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str2);

    strCopy(str1, str2);

    int len = strLength(str2);

    printf("Copied string: %s\n", str1);
    printf("Length of string: %d\n", len);

    return 0;
}
