#include<stdio.h>
int main(){
    int n;
    
    printf("Nhập số phần tử có trong mảng: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Số n phải lớn hơn 0.\n");
        return 1;
    }
    
    int array[n];
    
    for(int i = 0; i < n; i++){
         printf("Phần tử thứ %d: ", i+1);
         scanf("%d", &array[i]);
         
    }
    printf("Các phần tử có trong mảng là: ");
    for(int i=0; i < n; i++){
        printf("%d ", array[i]);
        
    }
   
 
    printf("\n");
    return 0;
}