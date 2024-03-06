#include<stdio.h>
#include<stdlib.h>

int evenNumber(int *arr, int n) {
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if(*(arr + i) % 2 == 0 ){
            count++;
        }
    }
    return count;
}

int main() {
    int *arr, n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    // Cấp phát bộ nhớ cho mảng arr
    arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    printf("So phan tu chan trong mang la: %d\n", evenNumber(arr, n));

    // Giải phóng bộ nhớ của mảng arr sau khi sử dụng xong
    free(arr);

    return 0; 
}
