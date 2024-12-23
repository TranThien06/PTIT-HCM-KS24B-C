/*Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp 
xếp chọn (selection sort) để sắp xếp lại mảng theo thứ tự tăng dần.*/

#include<stdio.h>
int main(){
    int numbers[4] = {9, 5, 6 ,3};
    int size = sizeof(numbers) / sizeof(int);
    
    for (int i=0; i<size; i++){
        int key = numbers[i];
        int j = i -1;
        while(j>=0 && key < numbers[j]){
            numbers[j+1] = numbers[j];
            j--;
        }
       numbers[j+1] = key;
    }
    printf("\n");
    printf("Mang sap xep la:\n");
    for(int i =0; i<size; i++){
        printf("%d\t", numbers[i]);
    }
    
    return 0;
}