#include <stdio.h>
int main(){
    // Khai báo mảng và gán giá trị
     int arr[] = {1, 2, 3, 4, 5};
     
     // tính độ dài của mảng
     
     int length = sizeof(arr) / sizeof(arr[0]);
     
     // in ra từng phần tử trong mảng
     
     printf("Các phần tử trong mảng:\n");
     for (int i = 0; i < length; i++){
         printf("%d", arr[i]);
         
     }
     
     // in ra độ dài của mảng
     printf("\nĐộ dài của mảng là: %d\n", length);
     
     
     
    return 0;
}