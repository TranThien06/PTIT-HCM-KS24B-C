#include <stdio.h>
int main(){
    int arr[5];
    
    printf("Nhập từng phần tử trong mảng.\n");
    for(int i=0; i<5; i++){
        printf("Phần tử thứ %d.", i+1);
        scanf("%d", &arr[i]);   
    }
    
    
    printf("Các phần tử trong mảng la:\n");
    for(int i=0; i < 5; i++){
        printf("%d", arr[i]);
        
        
    }
    
    printf("\n");
    return 0;
}