#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2, tong;

    printf("Nhập số thứ nhất: ");
    scanf("%d", &so1);

    printf("Nhập số thứ hai: ");
    scanf("%d", &so2);

    tong = tinhTong(so1, so2);

    printf("Tổng của %d và %d là: %d\n", so1, so2, tong);

    return 0;
}
