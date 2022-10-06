// Quick Sort Program
#include<stdio.h>
int part(int a[], int l, int h){
    int pi = l, i = l, j = h, temp;
    while(i < j){
        while(a[i] < a[pi]){
            i++;
        }
        while(a[j] > a[pi]){
            j--;
        }
        if(i < j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[pi];
    a[pi] = a[j];
    a[j] = a[pi];
    return j;
}
void quicksort(int a[], int l, int h){
    if(l < h){
        int p = part(a, l, h);
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, h);
    }
}

int main(){
    int a[100], n, i;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements \n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("Sorted array:");
    for(int i = 0; i < n; i++){
        printf(" %d", a[i]);
    }
}
