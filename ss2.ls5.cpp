#include <stdio.h>
 
 int main() {
 	// Khoi tao chieu dai va chieu rong hcn va gan gia tri
 	int a = 5; // Chieu rong hcn
 	int b= 2; // Chieu dai hcn
 	
 	// Tinh chu vi va dien tich hcn
 	int perimeter = 2 * (a +b); // Chu vi hinh chu nhat
 	int area = a * b ; // Dien tich hcn
 	
 	// In ket qua ra man hinh
 	printf("Chieu rong cua hinh chu nhat la: %d\n", a);
 	printf("Chieu dai cua hinhn chu nhat la: %d\n", b);
 	printf("Chu vi cua hinh chu nhat la: %d\n", perimeter);
 	printf("Dien tich hinh chu nhat la: %d\n", area);
 	
 	return 0;
 }
 
