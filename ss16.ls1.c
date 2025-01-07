#include <stdio.h>

int main() {
    int var = 42;         
    int *ptr = &var;      

    
    printf("Gia tri cua bien var: %d\n", var);
    printf("Dia chi cua bien var: %p\n", &var);

    printf("Gia tri cua bien var qua con tro: %d\n", *ptr);
    printf("Dia chi cua bien var qua con tro: %p\n", ptr);

    return 0;
}
