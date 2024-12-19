//Viết chương trình yêu cầu người dùng nhập vào một số nguyên,khởi tạo mảng 2 chiều từ số nguyên đã
//nhập có số hàng và số cột bằng nhau. In mảng ra dưới dạng ma trận vuông.

#include<stdio.h>
int main(){
    int n;
    
    printf("Nhập số nguyên n: ");
    scanf("%d", &n);
    
    int array[n][n];
    printf("Nhập giá trị cho các phần tử trong mảng:\n");
     for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            printf("Phần tử thứ [%d][%d]: ", i, j );
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("Ma trận vuông vừa nhập.\n");
     for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            printf("%d   ", array[i][j]);
            
            
        }
        printf("\n");
    }
    
    
    
    return 0;
}