#include<stdio.h>
int main(){
    int i = 20; 
    while(i >= 0 ){
        if(i % 2 == 1){
            printf("%d ", i);
        }
        i--;
    }

    return 0 ;
}