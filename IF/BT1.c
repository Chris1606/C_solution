#include<stdio.h>

int main(){
    float x;
    scanf("%f", &x);
    float ans ; 
    if (x >= 0) {
        ans = x*x;
    }else{
        ans = -x*x;
    }
    printf("%f", ans);
}