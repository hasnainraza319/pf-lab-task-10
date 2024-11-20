#include <stdio.h>

void bubbleSort(int arr[], int size) {
    if (size == 1) return;
    for (int j = 0; j < size - 1; j++) {
  if (arr[j] > arr[j + 1]) {
   int temp = arr[j];
   arr[j] = arr[j + 1];
    arr[j + 1] = temp;
  }
    }
    bubbleSort(arr, size - 1);
}

int main() {
    int arr[] = {69, 43, 26, 32, 62, 11, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, size);
    
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

