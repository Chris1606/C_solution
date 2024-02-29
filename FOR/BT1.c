#include <stdio.h>

int checkPrime(int a){
    if (a <= 1){
        return 0 ; 
    }
    if (a == 2){
        return 1; 
    }
    for (int i = 3; i <= a/2; i++){
        if (a % i == 0 ){
            return 0 ;
        }
    }
    return 1; 
}

int main(){ 
    for(int i = 1; i <= 50; i++){
        if (checkPrime(i) == 1){
            printf("%d ", i);
        }
    }
    return 0 ;
}