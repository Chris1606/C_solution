#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a + *b; 
    *a = temp - *a;
    *b = temp - *a;

}

int main(){
    int a; 
    int b;
    scanf("%d %d",&a,&b); 
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0; 
    
}