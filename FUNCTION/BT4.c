#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a + *b; 
    *a = temp - *a;
    *b = temp - *a;

}
void increase(int *arr, int n ){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(*(arr+i) > *(arr+j)){
                swap(arr+i, arr+j);
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr+i));
    }
}
void decrease(int *arr, int n ){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(*(arr+i) < *(arr+j)){
                swap(arr+i, arr+j);
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr+i));
    }
}
int main(){
    int a[10] = {1,4,2,2,1,1,6,7,9,4};
    decrease(a, 10);
    return 0; 
}