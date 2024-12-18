#include <stdio.h>

int main() {
  
    int array[5] = {12, 45, 23, 8, 19};
    
    int max = array[0];
    int min = array[0];

    for (int i = 1; i < 5; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Phần tử lớn nhất trong mảng là: %d\n", max);
    printf("Phần tử nhỏ nhất trong mảng là: %d\n", min);

    return 0;
}
