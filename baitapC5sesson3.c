#include <stdio.h>

struct SinhVien {
    char ten[100];
    int tuoi;
    char sdt[15];
    char email[100];
};

int main() {
    int n;

    printf("Nhập số lượng sinh viên: ");
    scanf("%d", &n);

    struct SinhVien sv[n];  
    
    for (int i = 0; i < n; i++) {
        printf("\nNhập thông tin cho sinh viên %d:\n", i + 1);

        printf("Tên sinh viên: ");
        scanf(" %[^\n]%*c", sv[i].ten);  
        printf("Tuổi sinh viên: ");
        scanf("%d", &sv[i].tuoi);

        printf("Số điện thoại sinh viên: ");
        scanf("%s", sv[i].sdt);

        printf("Email sinh viên: ");
        scanf("%s", sv[i].email);
    }

    printf("\nDanh sách sinh viên:\n");
    printf("Số TT | Tên sinh viên                | Tuổi | Số điện thoại | Email\n");
    printf("--------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-6d | %-25s | %-4d | %-15s | %-20s\n", i + 1, sv[i].ten, sv[i].tuoi, sv[i].sdt, sv[i].email);
    }

    return 0;
}
