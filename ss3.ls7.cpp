#include <stdio.h>

int main() {
    int n, sum;
    
    // Nhap so nguyen 4 chu so
    
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);
    
    // In ket qua ra man hinh
    
    sum = n / 1000 + (n / 100) % 10 + (n / 10) % 10 + n % 10;
    printf("Tong cac chu so: %d\n", sum);
    
    return 0;
}

