#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;

    
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &n);

    
    if (n == 0) {
        printf("Số 0 có vô số ước.\n");
    } else {
        printf("Các ước của %d là:\n", n);

        
        for (int i = 1; i <= abs(n); i++) { 
            if (n % i == 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}

