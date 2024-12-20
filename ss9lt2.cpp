#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int index, newValue;

    
    printf("Mảng ban đầu:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    printf("Nhập vị trí cần sửa (0-9): ");
    scanf("%d", &index);

    
    if (index < 0 || index >= 10) {
        printf("Vị trí không hợp lệ. Vui lòng chạy lại chương trình.\n");
        return 1; 
    }

    printf("Nhập giá trị mới: ");
    scanf("%d", &newValue);

   
    arr[index] = newValue;

    
    printf("Mảng sau khi sửa:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


