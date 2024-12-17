#include <stdio.h>

int main() {
    // Khai bao
    int sochotruoc = 25; // giả sử số cho trước là 25
    int socannhap;
    
    // Yeu cau nguoi dung nhap vao số cần nhập
    do {
        printf("Nhập một số nguyên:");
        scanf("%d", &socannhap);
        
        if(sochotruoc != socannhap){
            printf("Số nhập không đúng hãy thử lại.\n");
        }
        
    }while(sochotruoc != socannhap);
    printf("Chuc mung ban da nhap dung.\n");

    return 0;
}
