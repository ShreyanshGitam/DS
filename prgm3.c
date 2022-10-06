#include<stdio.h>
int main(){
    int R[6] = {9, 36, 8, 48, 7, 56}, i, n = 6, min, temp;
    printf("Given Array:");
    for(i = 0; i < n; i++){
        printf("\t%d", R[i]);
    }
    for(i = 0; i < n - 1; i++){
            min = i;
            for(int j = i + 1; j < n; j++){
                if(R[min] > R[j]){
                    min = j;
                }
            }
        temp = R[i];
        R[i] = R[min];
        R[min] = temp;
    }
    printf("\nSorted Array:");
    for(i = 0; i < n; i++){
        printf("\t%d", R[i]);
    }
    printf("\n");
}