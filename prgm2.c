//Binary Search Program
#include<stdio.h>
int main(){
    int a[5] = {10, 20, 30, 40, 50}, n = 5, i , k;
    printf("Enter element to search: ");
    scanf("%d", &k);
    int l = 0, h = n - 1, m = (l + h)/2;
    while(l <= h){
        if(k == a[m]){
            printf("Element is found at %d", m);
            break;
        }
        else if(k > a[m]){
            l = m + 1;
            m = (l + h)/2;
        }
        else if(k < a[m]){
            l = m - 1;
            m = (l + h)/2;
        }
    }
    if(l > h){
        printf("Not Found");
    }
}