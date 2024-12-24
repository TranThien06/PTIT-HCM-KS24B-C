#include<stdio.h>
int main(){
    int numbers[10] = {9, 5, 6 ,3, 2, 35, 22,25, 8, 1};
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
    for(int i = 0; i<size; i++){
        printf("%d\t", numbers[i]);
    }
    int flag = -1;
    int searchValue =24 ;
    for(int i = 0; i<size; i++){
        if(numbers[i] == searchValue){
            flag = i;
            break;
        }
    }
    if(flag != -1){
        printf("\nPhan tu can tim o vi tri %d", flag);
        
    }else{
        printf("\nPhan tu can tim khong co trong mang.");
    }
    
    
    return 0;
}