#include <stdio.h>
void dislay(int n){
    for (int i = 0; i <= n; i++){
        printf("%d ", i);
    }
}
int main(){
    int n ; 
    scanf("%d", &n);
    dislay(n);
    return 0 ; 
}