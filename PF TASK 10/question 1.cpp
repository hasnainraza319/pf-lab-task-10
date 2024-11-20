#include <stdio.h>
#include <string.h>

void reverse(char *str, int index) {
    if (index < 0) return;
    printf("%c", str[index]);
    reverse(str, index - 1);
}

int main() {
    char message[102];
    printf("Enter message: ");
    gets(message);
    printf("Reversed message: ");
    reverse(message, strlen(message) - 1);
    return 0;
}

