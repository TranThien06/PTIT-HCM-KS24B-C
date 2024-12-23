/*Nhập số dòng và số cột mảng 2 chiều (n, m), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo.
Tiến hành sắp xếp các phần tử trong mảng tăng dần theo từng dòng và in dưới dạng ma trận sau khi sắp xếp.*/



#include <stdio.h>

#define MAX 100 

int main() {
    int n, m;
    int matrix[MAX][MAX];

    
    printf("Nhập số dòng của ma trận: ");
    scanf("%d", &n);
    printf("Nhập số cột của ma trận: ");
    scanf("%d", &m);

    
    printf("Nhập các phần tử của ma trận:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Phần tử [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int k = j + 1; k < m; k++) {
                if (matrix[i][j] > matrix[i][k]) {
                    
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = temp;
                }
            }
        }
    }

    
    printf("Ma trận sau khi sắp xếp tăng dần từng dòng:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
