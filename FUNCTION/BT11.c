#include <stdio.h>
#include <math.h>


int isFibonacci(int num) {

    int x = 5 * num * num + 4;
    int y = 5 * num * num - 4;
    int sqrt_x = sqrt(x);
    int sqrt_y = sqrt(y);

    if (sqrt_x * sqrt_x == x || sqrt_y * sqrt_y == y) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num;
    printf("Nhap mot so nguyen ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("%d la so fibonacci.\n", num);
    } else {
        printf("%d khong phai la fibonacci.\n", num);
    }

    return 0;
}
