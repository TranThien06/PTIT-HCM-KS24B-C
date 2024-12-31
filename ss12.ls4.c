#include <stdio.h>

int findMax(int arr[], int size) {
    if (size <= 0) {
        printf("Mang khong hop le.\n");
        return -1;
    }
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; //
        }
    }
    return max;
}

int main() {
    int myArray[] = {3, 5, 7, 2, 8, -1, 4};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int max = findMax(myArray, size);

    // In kết quả
    if (size > 0) {
        printf("So lon nhat trong mang la: %d\n", max);
    }

    return 0;
}
