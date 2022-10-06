#include<stdio.h>
int main (){
    int a[5] = {32, 56, 78, 12, 6}, i, j, n = 5, temp;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}