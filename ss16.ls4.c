#include <stdio.h>


void inMang(int *arr, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int mang[] = {3, 8, 4, 2, 9};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    inMang(mang, kichThuoc);

    return 0;
}
