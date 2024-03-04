#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "Happiness can be found, even in the darkest of times, if one only remembers to turn on the light.";
    
    for (int i = 0; i < strlen(str); i++){
        if(str[i] == 'i'){
            printf("Ki tu %d chua ki tu i \n", i+1);
        }
    }
    return 0 ; 
}