/*Khai báo và gán giá trị cho một ma trận dưới dạng mảng hai chiều bất kỳ, tính tổng các phần tử 
trên đường biên của ma trận và in kết quả ra màn hình*/

#include<stdio.h>
int main(){
    int arr [3][3]={
        {3, 5, 6},
        {2, 6 ,8},
        {5, 6, 2}
     };
    printf("Ma tran 3x3:\n");
     for(int i=0; i<3; i++){
         for(int j=0; j<3; j++){
             printf("%d \t" , arr[i][j]);
         } 
         printf("\n");
     }
    
     int n = 3;
     int tong =0;
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             if(i == 0 || i == n-1 || j == 0 || j == n-1) { 
             tong += arr[i][j];
             }
         }
     }
       printf("Tổng các phần tử trên đường biên của ma trận : %d", tong);
    
    
    
    return 0;
}