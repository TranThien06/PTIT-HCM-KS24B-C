#include <stdio.h>

int main() {
    int so, tong = 0;

    printf("Nhập một số nguyên có 4 chữ số: ");
    scanf("%d", &so);

    while (so != 0) {
        tong += so % 10;  
        so /= 10;         
    }

    printf("Tổng các chữ số trong số đã nhập là: %d\n", tong);

    return 0;
}

