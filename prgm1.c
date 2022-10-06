//Linear Search Program
#include<stdio.h>
#define MAX_SIZE 10
void linear_search(int[], int);
int main(){
    int arr_search[MAX_SIZE], i, element;
    printf("Simple Linear Search Program\n");
    printf("\nEnter %d elements for the array:\n", MAX_SIZE);
    for(i = 0; i < MAX_SIZE; i++){
        scanf("%d", &arr_search[i]);
    }
    printf("Enter Element for Searching: ");
    scanf("%d", &element);
    linear_search(arr_search, element);
}
void linear_search(int fn_arr[], int element){
    int i;
    for(i = 0; i < MAX_SIZE; i++){
        if(fn_arr[i] == element){
            printf("Linear Search: %d is found at index: %d.\n", element, i);
            break;
        }
    }
    if(MAX_SIZE == i){
        printf("Search Element %d is not found.\n", element);
    }
}