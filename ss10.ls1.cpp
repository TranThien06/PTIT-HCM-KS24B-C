/*Khởi tạo và gán giá trị cho mảng bất kỳ, yêu cầu người dùng nhập vào phần tử bất
kỳ và kiểm tra xem phần tử có tồn tại trong mảng không, in ra vị trí của phần tử đó.*/

#include <stdio.h>

int main() {
  
    int array[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(array) / sizeof(array[0]); 
    int element, found = 0;

    
    printf("Mảng hiện tại: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    
    printf("Nhập vào phần tử cần kiểm tra: ");
    scanf("%d", &element);

   
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            found = 1;
            printf("Phần tử %d tồn tại trong mảng tại vị trí %d.\n", element, i);
            break;
        }
    }

    
    if (!found) {
        printf("Phần tử %d không tồn tại trong mảng.\n", element);
    }

    return 0;
}
