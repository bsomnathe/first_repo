#include "find_largest_and_sec_large_number.h"

void find_largest_and_sec_large_number(void){
    int arr[10], n,i, largest, sec_largest;

    printf("Enter the no of elements ");
    scanf("%d",&n);

    printf("Enter the elements ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    sec_largest = arr[0];

    for(i=0; i<n; i++){
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    for(i=0; i<n; i++){
        if(arr[i] > sec_largest && arr[i] < largest) {
            sec_largest = arr[i];
        }
    }

    printf("Largest = %d Second largest = %d\n", largest, sec_largest);

}

