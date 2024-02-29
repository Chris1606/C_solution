#include <stdio.h>

int main() {
    int month, year;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 3:
        case 5: 
        case 7: 
        case 8:
        case 10:
        case 12:
            printf("Thang %d nam %d co 31 ngay", month, year);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Thang %d nam %d co 30 ngay", month, year);
            break;
        case 2:
            // Checking for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("Thang 2 nam %d co 29 ngay", year);
            else
                printf("Thang 2 nam %d co 28 ngay", year);
            break;  
        default:
            printf("Thang khong hop le");
            break;
    }
    return 0;
}
