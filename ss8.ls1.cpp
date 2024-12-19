#include<stdio.h>
int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    int kichthuocmang = sizeof(array) / sizeof(array[0]);
    
    printf("Các phần tử có trong mảng là: \n");
    for(int i = kichthuocmang - 1; i >= 0; i--){
        printf("%d \n", array[i]);
        
    }
    
    
    return 0;
}