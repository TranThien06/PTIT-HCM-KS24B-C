/*Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp xếp
nổi bọt (bubble sort) để sắp xếp lại mảng theo thứ tự tăng dần.*/
#include<stdio.h>
int main(){
    int numbers[4] = {9, 5, 6 ,3};
    int size = sizeof(numbers) / sizeof(int);
    
    for (int i=0; i<size; i++){
        int min = numbers[i];
        for(int j=i+1; j<size; j++){
            if(numbers[j]<min){
            min = numbers[j];
            numbers[j]= numbers[i];
            numbers[i] = min;
            
            
            }
        }
    }
    printf("Mang sap xep la:\n");
    for(int i =0; i<size; i++){
        printf("%d\t", numbers[i]);
    }
    
    return 0;
}