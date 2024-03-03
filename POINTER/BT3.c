#include <stdio.h>

int main(){
    int a[10] = {7, 5, 8, 2, 3, 9, 1, 6, 8, 4} ; // initialize array

    int *p = a; // initialize pointer p

    int temp; //variable to swap

    for (int i = 0 ; i < 10 ; i++){
        for (int j = i+1; j < 10 ; j++){
            if ( *(p+i) > *(p+j)){
                temp = *(p+i)   ; 
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    for (int i = 0; i < 10 ; i++){
        printf("%d ", *(p+i));
    }
    return 0 ; 
}