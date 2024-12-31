#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am.\n");
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    unsigned long long fact = factorial(number);

 
    if (number >= 0) {
        printf("Giai thua cua %d la: %llu\n", number, fact);
    }

    return 0;
}
