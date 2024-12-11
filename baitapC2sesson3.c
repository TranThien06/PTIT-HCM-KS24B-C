#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhập nhiệt độ theo độ Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f độ Celsius tương đương với %.2f độ Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
