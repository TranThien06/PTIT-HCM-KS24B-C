#include <iostream>

int main(){
    int n, sum = 0;
    
    // yêu cầu người dùng nhập vào một số nguyên dương
    do {
        printf("Nhập số nguyên dương:");
        scanf("%d", &n);
        
        if(n <= 0){
            printf("Số nhập không hợp lệ hãy nhập số nguyên dương.\n");
            
        }
        
    }while(n <= 0);
    
    // Tính toongr từ 1 đến n
    for(int i = 1; i <= n; i++){
         sum += i;
    }
         
    // In kết quả ra màn hình
    printf("Tổng các chữ số từ 1 đến %d là: %d\n", n, sum);
    


    return 0;
}