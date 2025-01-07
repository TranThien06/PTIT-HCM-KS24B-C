//Khai báo và gán giá trị cho hai biến số nguyên bất kỳ và một biến kết quả, xây dựng hàm sử dụng con trỏ để tính tổng hai số nguyên 
//và lưu giá trị vào biến kết quả. Gọi hàm và in biến kết quả để kiểm tra.

#include <stdio.h>

void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}

int main() {
    int so1 = 25;    
    int so2 = 04;    
    int ketQua;     

    tinhTong(so1, so2, &ketQua);

    printf("Tong cua %d va %d la: %d\n", so1, so2, ketQua);

    return 0;
}


