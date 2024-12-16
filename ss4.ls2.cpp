#include <iostream>

int main(){
    
    int number;
    
    // Nhap vao mot so nguyen
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    
    // Kiem tra so vua nhap la so chan hay lẻ
    if (number % 2 == 0){
        printf ("So %d la so chan.\n", number);
    } else {
        printf ("So %d la so le.\n", number);
    }
    return 0;
}