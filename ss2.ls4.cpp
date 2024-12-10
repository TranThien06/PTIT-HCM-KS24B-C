#include <stdio.h>

int main() {	
	// Khoi tao bien canh hinh vuong va ga gia tri cho bien
	int side = 4; // Do dai canh cua hinh vuong
	
	// Tinh the tich va chu vi cua hinh vuong
	int perimeter = 4 * side; // Chu vi
	int area = side * side; // Dien tich
	
	// In ket qua ra man hinh
	printf("Do dai canh hinh vuong la: %d\n", side);
	printf("Chu vi cua hinh vuong la: %d\n", perimeter);
	printf("Dien tich cua hinh vuong la: %d\n", area);
	
	return 0;
	
}
