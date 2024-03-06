#include <stdio.h>


int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; // Là số nguyên tố
}

int main() {
    int num;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d la so nguyen to.\n", num);
    } else {
        printf("%d khong phai la so nguyen to..\n", num);
    }
    
    return 0;
}
