#include <stdio.h>

int main(){
    int n ; 
    scanf("%d", &n);
    int i = 1;
    int factorial = 1;  
    while ( i <= n ){
        factorial*=i;
        i++;
    }
    printf("%d", factorial);
    return 0;
}