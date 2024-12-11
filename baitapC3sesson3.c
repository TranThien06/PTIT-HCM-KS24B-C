#include <stdio.h>
#define PI 3.14159

int main() {
    float r, chuVi, dienTich;

    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &r);

    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    printf("Chu vi hình tròn là: %.2f\n", chuVi);
    printf("Diện tích hình tròn là: %.2f\n", dienTich);

    return 0;
}


 