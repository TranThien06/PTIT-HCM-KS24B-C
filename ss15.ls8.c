#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int capitalizeNext = 1;

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            capitalizeNext = 1;
        } else if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("Chuoi sau khi viet hoa cac chu cai dau: %s", str);

    return 0;
}
