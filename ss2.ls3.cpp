#include <stdio.h>

int main() {
	
	// Khai bao va khoi tao 2 so a va b
	int a = 10; // So nguyen thu nhat
	int b = 50; // So nguyen thu hai
	
	// Tinh toan
    int sum = a+ b;       // Tinh tong
    int difference = a - b; // Tinhn hieu
    int product = a * b;   // Tinh tich
    float quotient = (float)a / b; // Tinh thuong
	
	//In ra ket qua
	printf("So nguyen thu nhat: %d\n", a);
    printf("So nguyen thu hai: %d\n", b);
    printf("Tong cua hai so nguyen: %d\n", sum);
    printf("Hieu cua hai so nguyen: %d\n", difference);
    printf("Tich cua hai so nguyen: %d\n", product);
    printf("Thuong cua hai so nguyen: %.2f\n", quotient);
	
	
	return 0;
}
