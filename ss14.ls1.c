#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    size_t length = strlen(chuoi);
    if (chuoi[length - 1] == '\n') {
        chuoi[length - 1] = '\0';
        length--;
    }

    printf("Chuoi ban vua nhap: %s\n", chuoi);
    printf("Do dai cua chuoi la: %zu\n", length);

    return 0;
}
