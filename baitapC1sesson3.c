#include <stdio.h>

int main() {
    char name[100];  

    printf("Nhập tên của bạn: ");
    fgets(name, sizeof(name), stdin); 
    printf("Xin chào %s", name);

    return 0;
}
