#include<stdio.h>
#include<string.h>

void to_lower(char str[100]){
    for (int i = 0; i < strlen(str); i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
}
void to_upper(char str[100]){
    for (int i = 0; i < strlen(str); i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
}

int main(){
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Chuoi truoc khi chuyen doi: %s\n", str);
    
    to_lower(str);
    
    printf("Chuoi sau khi chuyen doi viet thuong: %s\n", str);
    
    to_upper(str);
    printf("Chuoi sau khi chuyen doi viet hoa: %s\n", str);

    return 0 ; 
}
