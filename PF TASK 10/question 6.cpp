#include <stdio.h>

void reverseString(char str[], int index) {
    if (str[index] == '\0') return;
    reverseString(str, index + 1);
    printf("%c", str[index]);
}

int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    reverseString(str, 0);
    printf("\n");
    return 0;
}

