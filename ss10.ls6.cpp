#include <stdio.h>

#define MAX_SIZE 100 
int main() {
    int arr[MAX_SIZE], positions[MAX_SIZE];
    int n, num, count = 0;

    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

  
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhập số nguyên cần tìm: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            positions[count] = i;
            count++;
        }
    }

    if (count > 0) {
        printf("Số %d được tìm thấy tại các vị trí: ", num);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
    } else {
        printf("Số %d không tồn tại trong mảng.\n", num);
    }

    return 0;
}
