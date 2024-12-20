#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    char correctPassword[] = "123456"; // Mật khẩu cho trước

    // Yêu cầu người dùng nhập mật khẩu
    printf("Nhập mật khẩu: ");
    scanf("%19s", password);

    // Kiểm tra mật khẩu
    if (strcmp(password, correctPassword) == 0) {
        printf("Mật khẩu chính xác!\n");
    } else {
        printf("Mật khẩu sai!\n");
    }

    return 0;
}
