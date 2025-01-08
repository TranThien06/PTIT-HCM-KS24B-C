#include<stdio.h>

void capNhapPhanTu(int mang[], int giaTriMoi, int viTri){
    mang [viTri] = giaTriMoi;

}

int main(){
    int mang[] = {4, 6, 7, 8, 1};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    printf("Mang ban dau: ");
    for(int i =0; i<kichThuoc; i++){
        printf("%d \t", mang[i]);

    }
     printf("\n");
      capNhapPhanTu(mang, 25, 2);

     printf("Mang sau khi cap nhap: ");
     for(int i=0; i<kichThuoc; i++){
        printf("%d\t", mang[i]);
     }  
 printf("\n");
 return 0;

}