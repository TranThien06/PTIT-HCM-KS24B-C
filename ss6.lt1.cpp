#include <stdio.h>
int main(){
    int number[5];
    int sum = 0;
    
    // yêu cầu người dùng nhập 5 số nguyên
    printf("Nhập vào 5 số nguyên:\n");
    for (int i =   0; i < 5; i++) {
        printf("Số thứ %d:", i + 1);
        scanf("%d", &number[i]);
        
        // Tổng các số lẻ
        if(number[i] % 2 != 0) {
            sum += number[1];
            
        }
    }
    // In tổng các số lẻ
    printf("Tổng các số lẻ: %d\n", sum);
    
    return 0;
}