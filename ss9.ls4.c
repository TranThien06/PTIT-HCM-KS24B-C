#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void nhapMang(int arr[], int *n) {
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", n);
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < *n; i++) {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void hienThiMang(int arr[], int n) {
    printf("Mảng hiện tại: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n) {
    if (*n < MAX) {
        printf("Nhập phần tử cần thêm: ");
        scanf("%d", &arr[*n]);
        (*n)++;
        printf("Phần tử đã được thêm vào mảng.\n");
    } else {
        printf("Mảng đã đầy, không thể thêm phần tử.\n");
    }
}

void suaPhanTu(int arr[], int n) {
    int index, value;
    printf("Nhập vị trí phần tử muốn sửa (0-%d): ", n-1);
    scanf("%d", &index);
    if (index >= 0 && index < n) {
        printf("Nhập giá trị mới cho phần tử ở vị trí %d: ", index);
        scanf("%d", &value);
        arr[index] = value;
        printf("Phần tử đã được sửa.\n");
    } else {
        printf("Vị trí không hợp lệ.\n");
    }
}

void xoaPhanTu(int arr[], int *n) {
    int index;
    printf("Nhập vị trí phần tử muốn xóa (0-%d): ", *n-1);
    scanf("%d", &index);
    if (index >= 0 && index < *n) {
        for (int i = index; i < *n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*n)--;
        printf("Phần tử đã được xóa.\n");
    } else {
        printf("Vị trí không hợp lệ.\n");
    }
}

int main() {
    int arr[MAX];
    int n = 0;  
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhập vào mảng\n");
        printf("2. Hiển thị mảng\n");
        printf("3. Thêm phần tử\n");
        printf("4. Sửa phần tử\n");
        printf("5. Xóa phần tử\n");
        printf("6. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                themPhanTu(arr, &n);
                break;
            case 4:
                suaPhanTu(arr, n);
                break;
            case 5:
                xoaPhanTu(arr, &n);
                break;
            case 6:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng nhập lại.\n");
        }
    } while (luaChon != 6);

    return 0;
}
