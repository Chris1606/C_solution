#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
void lower(char *name) {
    int n = strlen(name);
    for (int i = 0; i < n; i++) {
        name[i] = tolower(name[i]);
    }
}

void upper(char *name) {
    int n = strlen(name);
    if (!isspace(name[0])) {
        name[0] = toupper(name[0]);
    }
    for (int i = 1; i < n; i++) {
        if (name[i - 1] == ' ' && name[i] >= 'a' && name[i] <= 'z') {
            name[i] = toupper(name[i]);
        }
    }
}

void delete_space(char *name, char *result) {
    int n = strlen(name);
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (name[i] != ' ') {
            result[k] = name[i];
            k++;
        }
    }
    result[k] = '\0'; // Null-terminate the string
}

void add_space(char *temp, char *result) {
    int n = strlen(temp);
    int k = 1;
    result[0] = temp[0];
    for (int i = 1; i < n; i++) {
        if(temp[i] >= 'a' && temp[i] <= 'z'){
            result[k++] = temp[i];
        }else{
            result[k++] = ' ';
            result[k++] = temp[i];
        }
    }
    result[k] = '\0'; // Null-terminate the string
}

int main() {
    char ho_ten[30];
    char temp[30];
    char result[30];

    printf("Nhap ho ten: ");
    fgets(ho_ten, sizeof(ho_ten), stdin);
    ho_ten[strcspn(ho_ten, "\n")] = '\0'; // Remove trailing newline if present

    lower(ho_ten);
    upper(ho_ten);
    puts(ho_ten);

    delete_space(ho_ten, temp);
    puts(temp);

    add_space(temp, result);
    puts(result);

    printf("Length of ho_ten: %lu\n", strlen(ho_ten));
    printf("Length of temp: %lu\n", strlen(temp));
    printf("Length of result: %lu\n", strlen(result));

    getch();
    return 0;
}
