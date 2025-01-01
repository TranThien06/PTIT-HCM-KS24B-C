#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char result[100];
    char ch;
    int j = 0;

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, result);

    return 0;
}
