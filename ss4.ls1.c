#include <stdio.h>

int main(){
    int number;
    
    // Nhap vao mot so bat ky
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    
    // Kiem tra so am hay duong
    if (number>0){
        printf("So %d la so duong.\n", number);
    } else if(number<0){
        printf("So %d la so am.\n", number);
    }else{
        printf("So ban nhap la so 0.\n");
    }
    
    return 0;

}    
    