#include <stdio.h>

#define MAX 100

void inputArray(int arr[], int *n) {
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", n);
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    printf("Các phần tử trong mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *n, int pos, int value) {
    if (pos < 0 || pos > *n) {
        printf("Vị trí không hợp lệ!\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
}

void updateElement(int arr[], int n, int pos, int value) {
    if (pos < 0 || pos >= n) {
        printf("Vị trí không hợp lệ!\n");
        return;
    }
    arr[pos] = value;
}

void deleteElement(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Vị trí không hợp lệ!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void sortArray(int arr[], int n, int order) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((order == 0 && arr[i] < arr[j]) || (order == 1 && arr[i] > arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int value) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == value) return mid;
        else if (arr[mid] < value) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[MAX], n = 0, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("2. In ra giá trị các phần tử đang quản lý\n");
        printf("3. Thêm một phần tử vào vị trí chỉ định\n");
        printf("4. Sửa một phần tử ở vị trí chỉ định\n");
        printf("5. Xóa một phần tử ở vị trí chỉ định\n");
        printf("6. Sắp xếp các phần tử\n");
        printf("7. Tìm kiếm phần tử nhập vào\n");
        printf("8. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                printArray(arr, n);
                break;
            case 3: {
                int pos, value;
                printf("Nhập vị trí cần thêm: ");
                scanf("%d", &pos);
                printf("Nhập giá trị cần thêm: ");
                scanf("%d", &value);
                insertElement(arr, &n, pos, value);
                break;
            }
            case 4: {
                int pos, value;
                printf("Nhập vị trí cần sửa: ");
                scanf("%d", &pos);
                printf("Nhập giá trị mới: ");
                scanf("%d", &value);
                updateElement(arr, n, pos, value);
                break;
            }
            case 5: {
                int pos;
                printf("Nhập vị trí cần xóa: ");
                scanf("%d", &pos);
                deleteElement(arr, &n, pos);
                break;
            }
            case 6: {
                int subChoice;
                printf("a. Giảm dần (Nhập 0)\n");
                printf("b. Tăng dần (Nhập 1)\n");
                printf("Lựa chọn: ");
                scanf("%d", &subChoice);
                sortArray(arr, n, subChoice);
                break;
            }
            case 7: {
                int subChoice, value, result;
                printf("a. Tìm kiếm tuyến tính (Nhập 0)\n");
                printf("b. Tìm kiếm nhị phân (Nhập 1)\n");
                printf("Lựa chọn: ");
                scanf("%d", &subChoice);
                printf("Nhập giá trị cần tìm: ");
                scanf("%d", &value);
                if (subChoice == 0) {
                    result = linearSearch(arr, n, value);
                } else {
                    sortArray(arr, n, 1);
                    result = binarySearch(arr, n, value);
                }
                if (result != -1) {
                    printf("Phần tử %d được tìm thấy tại vị trí %d.\n", value, result);
                } else {
                    printf("Không tìm thấy phần tử %d.\n", value);
                }
                break;
            }
            case 8:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
        }
    } while (choice != 8);

    return 0;
}
