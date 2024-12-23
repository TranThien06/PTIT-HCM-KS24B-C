#include<stdio.h>
#define MAX_SIZE 100

    int main() {
        int arr[MAX_SIZE];
        int currentLength = 0;
        int n, deleteIndex, i;
        printf("nhap so phan tu ban dau: ");
        scanf("%d", &n);
        
        if (n > MAX_SIZE) {
            printf("so phan tu khong the vuot qua 100.\n");
          
        }
        for (i = 0; i < n; i++) {
            printf("nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        currentLength = n;
        printf("nhap vi tri can xoa (tu 0 den %d): ", currentLength - 1);
        scanf("%d", &deleteIndex);
        
        if(deleteIndex < 0 || deleteIndex >= currentLength) {
            printf("vi tri khong hop le.\n");
            return 1;
        }
        for (i = deleteIndex; i < currentLength - 1; i++) {
            arr[i] = arr[i + 1];
        }
        currentLength--;
        printf("mang sau khi xoa phan tu:\n");
        for (i = 0;i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }