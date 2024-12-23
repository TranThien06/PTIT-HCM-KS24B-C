#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}
void nhapMang(int **arr, int *n) {
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", n);
    *arr = (int *)malloc(*n * sizeof(int));

    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}
void inMang(int *arr, int n) {
    printf("Gia tri cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void inChanVaTinhTong(int *arr, int n) {
    int sum = 0;
    printf("Cac phan tu chan trong mang: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTong cac phan tu chan: %d\n", sum);
}
void inMaxMin(int *arr, int n) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Gia tri lon nhat trong mang: %d\n", max);
    printf("Gia tri nho nhat trong mang: %d\n", min);
}
void inSNTVaTinhTong(int *arr, int n) {
    int sum = 0;
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTong cac so nguyen to: %d\n", sum);
}
void thongKeSo(int *arr, int n) {
    int num, count = 0;
    printf("Nhap so can thong ke: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("So %d xuat hien %d lan trong mang.\n", num, count);
}
void themPhanTu(int **arr, int *n) {
    int value, index;
    printf("Nhap gia tri phan tu can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them (0 to %d): ", *n);
    scanf("%d", &index);

    if (index < 0 || index > *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    *arr = (int *)realloc(*arr, (*n + 1) * sizeof(int));

    for (int i = *n; i > index; i--) {
        (*arr)[i] = (*arr)[i - 1];
    }

    (*arr)[index] = value;
    (*n)++;
    printf("Da them phan tu %d vao vi tri %d.\n", value, index);
}
void hienThiMenu() {
    printf("\nMENU\n");
    printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
    printf("2. In ra gia tri cac phan tu dang quan ly\n");
    printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
    printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
    printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
    printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
    printf("7. Them mot phan tu vao vi tri chi dinh\n");
    printf("8. Thoat\n");
    printf("Lua chon cua ban: ");
}
int main() {
    int *arr = NULL;
    int n = 0;
    int choice;

    while (1) {
        hienThiMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(&arr, &n);
                break;
            case 2:
                inMang(arr, n);
                break;
            case 3:
                inChanVaTinhTong(arr, n);
                break;
            case 4:
                inMaxMin(arr, n);
                break;
            case 5:
                inSNTVaTinhTong(arr, n);
                break;
            case 6:
                thongKeSo(arr, n);
                break;
            case 7:
                themPhanTu(&arr, &n);
                break;
            case 8:
                free(arr);
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
                break;
        }
    }

    return 0;
}
