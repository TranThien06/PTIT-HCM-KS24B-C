#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv;

    printf("Nhap ten sinh vien: ");
    fgets(sv.name, sizeof(sv.name), stdin);
    sv.name[strcspn(sv.name, "\n")] = '\0';

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv.age);
    getchar();

    printf("Nhap so dien thoai: ");
    fgets(sv.phoneNumber, sizeof(sv.phoneNumber), stdin);
    sv.phoneNumber[strcspn(sv.phoneNumber, "\n")] = '\0';

    printf("\nThong tin sinh vien:\n");
    printf("Ho ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}