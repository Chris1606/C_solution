#include <stdio.h>

// Hàm tính ước chung lớn nhất
int find_gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_lcm(int a, int b) {
    return (a * b) / find_gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    int gcd = find_gcd(num1, num2);
    int lcm = find_lcm(num1, num2);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, gcd);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", num1, num2, lcm);

    return 0;
}
