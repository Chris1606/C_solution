#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    printf("So fibonacci thu  %d la: %d\n", n, fibonacci_recursive(n));
    
    return 0;
}
