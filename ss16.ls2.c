//Khai báo và gán giá trị cho hai biến bất kỳ, xây dựng hàm sử dụng con trỏ
//để tiến hành đổi giá trị 2 biến với nhau và in giá trị của sau khi thay đổi.
//Gọi hàm và in 2 biến để kiểm tra kết quả.
#include <stdio.h>

int hoanDoi(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b = temp;
    }

int main(){
    int x = 25;
    int y= 4;
     printf("Trước khi hoán đổi: \n");
     printf("x = %d\n", x);
     printf("y = %d\n", y);

     hoanDoi(&x, &y);

     printf("Sau khi hoán đổi: \n");
     printf("x = %d\n", x);
     printf("y = %d\n", y);



    return 0;
}

