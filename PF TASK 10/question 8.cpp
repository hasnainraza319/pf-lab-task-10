#include <stdio.h>

void printArray(int arr[], int size) {
    if (size == 0) return;
    printf("%d ", arr[0]);
    printArray(arr + 1, size - 1);
}
int main() {
    int arr[] = {3, 2, 4, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printArray(arr, size);
    printf("\n");
    return 0;
}

