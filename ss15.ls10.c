#include <stdio.h>
#include <string.h>

int main() {
    char str[100];           
    int freq[256] = {0};    

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        freq[(int)str[i]]++;
    }

    printf("Ky tu va so lan xuat hien:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' xuat hien %d lan\n", i, freq[i]);
        }
    }

    return 0;
}
