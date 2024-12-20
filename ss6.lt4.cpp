#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    
    printf("Nhập hệ số a: ");
    scanf("%f", &a);
    printf("Nhập hệ số b: ");
    scanf("%f", &b);
    printf("Nhập hệ số c: ");
    scanf("%f", &c);

    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phương trình có vô số nghiệm.\n");
            } else {
                printf("Phương trình vô nghiệm.\n");
            }
        } else {
            printf("Phương trình bậc nhất, nghiệm là: x = %.2f\n", -c / b);
        }
    } else {
        
        delta = b * b - 4 * a * c;

        
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phương trình có 2 nghiệm phân biệt:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phương trình có nghiệm kép:\n");
            printf("x1 = x2 = %.2f\n", x1);
        } else {
            printf("Phương trình vô nghiệm.\n");
        }
    }

    return 0;
}
