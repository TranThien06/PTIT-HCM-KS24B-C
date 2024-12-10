#include <stdio.h>

#define PI 3.14 // Khai bao hang so Pi kieu float co gia tri la 3.14

int main() {
	//Khai bao ban kinh cua hinh tron
	float radius = 5; // Ban kinh hinh tron
	
	// Tinh chu i va dien tich hinh tron
	float circumference = 2 * PI * radius; // Chu vi = 2 x pi x bankinh
	float area = PI * radius * radius; // Dien tich = pi x ban kinh^2
	
	//In ket qua ra man hinh
	printf("Ban kinh cua hinh tron la: %.2f\n", radius);
	printf("Chi vi cua hinh tron la: %.2f\n", circumference);
	printf("Dien tich cua hinh tron la: %.2f\n", area);
	
	return 0;
}
