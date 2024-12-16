#include <iostream>

int main(){
    int a, b, c;
    
    //Nhập vào 3 số nguyên
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d" ,&a);
    
    printf("Nhap so nguyen thu hai: ");
    scanf("%d" ,&b);
    
    printf("Nhap so nguyen thu ba: ");
    scanf("%d" ,&c);
    
    //Kiểm tra số thứ ba có nằm giữa số thứ nhất và số thứ hai hay không
    if((c > a && c < b) || (c < a && c > b)) {
        printf("So %d nam khoang giua so thu %d va %d.\n", c, a, b);
        
    } else {
        printf("So %d khong nam khoang giua so thu %d va %d.\n", c, a, b);
        
    }
    
    return 0;
}


