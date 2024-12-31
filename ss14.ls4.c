#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "QuangThien";
    char ky_tu;
    int dem = 0;

    printf("Hãy nhập vào một ký tự: ");
    scanf("%c", &ky_tu);

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ky_tu) {
            dem++;
        }
    }
        printf("Ký tự '%c' xuất hiện %d lần trong chuỗi \"%s\".\n", ky_tu, dem, chuoi);

    return 0;
}
