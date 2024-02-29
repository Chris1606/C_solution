#include <stdio.h>

long long int factorial(long long int n){
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main(){
    long long int n, factorial ; 
    scanf("%d", &n);
    if ( n == 0 || n == 1){
        printf("facrorial = 1");
        return 0; 
    }
    factorial = 1; 
    for (int i = n; i>=2; i--){
        factorial *= i ; 
    }
    printf("factorial = %d", factorial );
    
    return 0 ; 

}