#include <stdio.h>

void print_Percentage(int number, int percent) {
    if (percent > 100) {
        return;
    }
    double result = (number * percent) / 100.0;
    printf("%d%% of %d is %.2f\n", percent, number, result);
    print_Percentage(number, percent + 1);
}

int main() {
    int number;
    printf("Enter the  number: ");
    scanf("%d", &number);
    print_Percentage(number, 1);
    return 0;
}

