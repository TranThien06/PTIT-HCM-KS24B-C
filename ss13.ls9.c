#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int matrix[MAX][MAX];
    int n, m, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhập giá trị các phần tử của mảng\n");
        printf("2. In giá trị các phần tử của mảng theo ma trận\n");
        printf("3. In ra các phần tử ở góc theo ma trận\n");
        printf("4. In ra các phần tử nằm trên đường biên theo ma trận\n");
        printf("5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận\n");
        printf("6. In ra các phần tử là số nguyên tố theo ma trận\n");
        printf("7. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhập số dòng (n) và cột (m): ");
                scanf("%d %d", &n, &m);
                printf("Nhập các phần tử của mảng:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("matrix[%d][%d] = ", i, j);
                        scanf("%d", &matrix[i][j]);
                    }
                }
                break;

            case 2:
                printf("Ma trận:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", matrix[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Các phần tử ở góc của ma trận:\n");
                printf("%d %d\n", matrix[0][0], matrix[0][m - 1]);
                printf("%d %d\n", matrix[n - 1][0], matrix[n - 1][m - 1]);
                break;

            case 4:
                printf("Các phần tử trên đường biên:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                            printf("%d ", matrix[i][j]);
                        }
                    }
                }
                printf("\n");
                break;

            case 5:
                printf("Các phần tử trên đường chéo chính:\n");
                for (int i = 0; i < n && i < m; i++) {
                    printf("%d ", matrix[i][i]);
                }
                printf("\nCác phần tử trên đường chéo phụ:\n");
                for (int i = 0; i < n && i < m; i++) {
                    printf("%d ", matrix[i][m - i - 1]);
                }
                printf("\n");
                break;

            case 6:
                printf("Các phần tử là số nguyên tố trong ma trận:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (isPrime(matrix[i][j])) {
                            printf("%d ", matrix[i][j]);
                        }
                    }
                }
                printf("\n");
                break;

            case 7:
                printf("Thoát chương trình.\n");
                break;

            default:
                printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
        }
    } while (choice != 7);

    return 0;
}
