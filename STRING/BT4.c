#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];

    // Nhập chuỗi từ bàn phím
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Chuyển chuỗi thành chữ in hoa và in ra màn hình
    printf("Chuoi in hoa: ");
    for (int i = 0; i < strlen(str); i++) {
        putchar(toupper(str[i]));
    }

    // Chuyển chuỗi thành chữ in thường và in ra màn hình
    printf("\nChuoi in thuong: ");
    for (int i = 0; i < strlen(str); i++) {
        putchar(tolower(str[i]));
    }

    return 0;
}
