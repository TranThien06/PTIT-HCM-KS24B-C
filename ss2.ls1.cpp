#include <stdio.h>

int main() {
	// Kieu du lieu so nguyen (int): dung de luu cac so nguyen (am va duong)
	int age = 30; // Tuoi cua mot nguoi
	
	// Kieu unsigned int: Chi luu tru cac so nguyen khong am
	unsigned int distance = 100000; // Khoang cach, khonmg the am
	
	// Kieu short int: Dung de luu so nguyen nho hon, tiet kiem bo nho
	short int temperature = -15; // Nhiet do am trong mua dong
	
	// Keiu long int: Dung de luu tru cac so nguyen lon
	long int worldPopulation = 8000000000; // DAn so the gioi
	
	// Kieu float: Dung de luu truc cac so thuc voi do chinh xac hon
	float pi = 3.14f; // Gia tri gan dung cua so Pi
	
	// Kieu double: Dung de luu tru so thuc voi do chinh xac kem
	double gravity = 9.80665; // Gia toc trong truong (m/s^2)
	
    // Kieu char: Luu tru mot ki tu ASCII duy nhat
	char initial = 'T'; // Ky tu dau tien cua mot ten 
	
	// Keiu Bool: Luu tru gia tri logic dung(1) hoac sai (0)
	bool isAvailable = true; // Trang thai san sang (true)
	
	// Kieu long double: Do chinh xac cao hon double, thuong dung trong tinh toan khoa hoc
	long double goldenRatio = 1.61039895L; // Ty le vang
	
// In gia tri cua cac bien
    printf("Age: %d years old\n", age);
    printf("Distance: %u meters\n", distance);
    printf("Temperature: %hd°C\n", temperature);
    printf("World Population: %ld people\n", worldPopulation);
    printf("Pi: %.2f\n", pi);
    printf("Gravity: %.5lf m/s²\n", gravity);
    printf("Initial: %c\n", initial);
    printf("Is Available: %s\n", isAvailable ? "true" : "false");
    printf("Golden Ratio: %.15Lf\n", goldenRatio);
    
    return 0;	
}
