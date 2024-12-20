#include <stdio.h>

int main() {
    int numbers[5]; 
    int even_count = 0; 
    int odd_count = 0;  
    int i;

    
    printf("Nhập vào 5 số nguyên:\n");
    for (i = 0; i < 5; i++) {
        printf("Số thứ %d: ", i + 1);
        scanf("%d", &numbers[i]);

        
        if (numbers[i] % 2 == 0) {
            even_count++; 
        } else {
            odd_count++;  
        }
    }

    
    printf("Số lượng số chẵn: %d\n", even_count);
    printf("Số lượng số lẻ: %d\n", odd_count);

    return 0;
}
