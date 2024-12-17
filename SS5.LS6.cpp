#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        // Hiển thị menu
        printf("\n=============================\n");
        printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("=============================\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        // Xử lý lựa chọn
        if (choice >= 1 && choice <= 4) {
            // Nhập 2 số
            printf("Nhap so thu nhat: ");
            scanf("%f", &num1);
            printf("Nhap so thu hai: ");
            scanf("%f", &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Tong cua %.2f va %.2f la: %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Hieu cua %.2f va %.2f la: %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Tich cua %.2f va %.2f la: %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Thuong cua %.2f va %.2f la: %.2f\n", num1, num2, result);
                } else {
                    printf("Loi: Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Chuong trinh ket thuc. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai!\n");
        }
    } while (choice != 5);

    return 0;
}
