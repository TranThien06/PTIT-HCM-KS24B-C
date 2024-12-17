#include <iostream>

int main(){
    int a;
    
    // Yêu cầu người dùng nhập vào một số nguyên dương từ 1 đến 10
    do{
         printf("Nhập một số nguyên dương từ 1 đến 10:");
         scanf("%d", &a);
         
         if (a < 1 || a > 10) {
         printf("Số nhập không hợp lệ! Hãy nhập một số từ 1 đến 10.\n");
         }
    } while (a < 1 || a > 10);
    
    // In ra bảng cửu chương tương ứng
         printf("Bảng cửu chương của %d:/\n", a);
     for (int i = 1; i <= 10; i++) {
         printf("%d x %d = %d\n", a, i, a * i);
    }


    return 0;
    
}
