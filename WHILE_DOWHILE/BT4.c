#include<stdio.h>

int main(){
    int ans = 0; 
    int i = 1; 
    while( i <= 100){
        if( i % 2 == 0 && i % 3 == 0){
            ans+=1;
//            printf("%d ", i);
        }
        i++;
    }
    printf("%f ", (float)ans/100);
    return 0 ; 
}