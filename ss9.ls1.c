#include<stdio.h>
#define MAX_SIZE 100

    int main() {
        int arr[MAX_SIZE];
        int currentLength = 0;
        int n, addIndex, value, i;
        printf("nhap so phan tu ban dau: ");
        scanf("%d", &n);
        if (n > MAX_SIZE) {
            printf("so phan tu khong the vuot qua 100.\n");
            return 1;
        }
        for (i = 0; i < n; i++) {
            printf("nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        currentLength = n;
        printf("nhap vi tri ban muon them phan tu (tu 0 den %d): ", currentLength);
        scanf("%d", &addIndex);
        if (addIndex < 0 || addIndex > currentLength) {
            printf("vi tri khong hop le.\n");
            return 1;
        }
        printf("nhap gia tri ban muon them: ");
        scanf("%d", &value);
        if (addIndex < currentLength) {
            for (i = currentLength; i > addIndex; i--) {
                arr[i] = arr[i - 1];
            }
            arr[addIndex] = value;
            currentLength++;
        } else {
            arr[addIndex] = value;
            currentLength++;
        }
        printf("mang sau khi them phan tu:\n");
        for (i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }