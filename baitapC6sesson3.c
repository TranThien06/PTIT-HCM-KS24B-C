#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;

    printf("Nhập độ dài cạnh đáy của tam giác: ");
    scanf("%f", &canhDay);

    printf("Nhập chiều cao của tam giác: ");
    scanf("%f", &chieuCao);

    dienTich = 0.5 * canhDay * chieuCao;

    printf("Diện tích của tam giác là: %.2f\n", dienTich);

    return 0;
}
