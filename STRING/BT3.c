#include <string.h>
#include <stdio.h>
int main(){
    char str[] = "Happiness can be found, even in the darkest of times, if one only remembers to turn on the light.";
    int count = 0; 
    for(int i = 0 ; i < strlen(str); i++){
        if(str[i] != ' ' && (i == strlen(str) - 1 || str[i++] == ' ')){
            count++;
        }
    }
    printf("%d", count);
    return 0; 
}