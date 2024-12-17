#include <stdio.h>

int main() {
    // Vòng lặp từ 1 đến 9 để in từng bảng cửu chương
    for (int i = 1; i <= 9; i++) {
        printf("Bảng cửu chương %d:\n", i);
        // Vòng lặp từ 1 đến 10 để in các phép tính trong từng bảng
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("--------------------\n"); // Dòng kẻ phân cách giữa các bảng
    }
    return 0;
}
