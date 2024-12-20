#include <stdio.h>
#include <math.h>

int main() {
    printf("Các số Armstrong có 3 chữ số là:\n");

    for (int num = 100; num <= 999; num++) {
        int digit1 = num / 100;        // Chữ số hàng trăm
        int digit2 = (num / 10) % 10; // Chữ số hàng chục
        int digit3 = num % 10;        // Chữ số hàng đơn vị

        // Tính tổng lập phương của các chữ số
        int sumOfCubes = pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3);

        // Kiểm tra nếu tổng lập phương bằng chính số đó
        if (sumOfCubes == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}


