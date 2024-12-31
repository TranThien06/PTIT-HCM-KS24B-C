#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Quang Thien";

    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c", chuoi[i]);
        if (i < strlen(chuoi) - 1) {
            printf(" ");
        }
    }

    return 0;
}

