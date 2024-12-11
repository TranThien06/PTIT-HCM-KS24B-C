#include <stdio.h>

int main() {
    float toan, van, anh, tongDiem, diemTrungBinh;

    printf("Nhập điểm môn Toán: ");
    scanf("%f", &toan);

    printf("Nhập điểm môn Văn: ");
    scanf("%f", &van);

    printf("Nhập điểm môn Anh: ");
    scanf("%f", &anh);

    tongDiem = toan + van + anh;
    diemTrungBinh = tongDiem / 3;

    printf("Tổng điểm: %.2f\n", tongDiem);
    printf("Điểm trung bình: %.2f\n", diemTrungBinh);

    return 0;
}
