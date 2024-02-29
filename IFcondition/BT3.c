#include <stdio.h>

int main() {
    float a, b, c, max_value;

    // Nhập ba số từ người dùng
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    // Sử dụng toán tử ba ngôi để tìm giá trị lớn nhất
    max_value = (a > b && a > c) ? a : ((b > c) ? b : c);

    // In ra giá trị lớn nhất
    printf("Gia tri lon nhat la: %.2f\n", max_value);

    return 0;
}