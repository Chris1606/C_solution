/**
 * @file ARRAY_3.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
int main(){
    int arr[8] = {1,6,0,6,2,0,0,5};
    int temp; 
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("MANG SAU KHI SAP XEP LAI\n");
    for (int i = 0 ; i < 8 ; i++){
        printf("%d ", arr[i]);
    }
    return 0 ; 
}