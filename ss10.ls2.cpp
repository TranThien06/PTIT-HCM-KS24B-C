/*Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp xếp
nổi bọt (bubble sort) để sắp xếp lại mảng theo thứ tự tăng dần.*/
#include<stdio.h>
int main(){
    int numbers[4] = {4, 6, 2 ,1};
    int size = sizeof(numbers) / sizeof(int);
    
    for (int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(numbers[j+1]<numbers[j]){
            int temp = numbers[j];
            numbers[j]= numbers[j+1];
            numbers[j+1]=temp;
            
            
            }
        }
    }
    printf("Mang sap xep la:\n");
    for(int i =0; i<size; i++){
        printf("%d\t", numbers[i]);
    }
    
    return 0;
}