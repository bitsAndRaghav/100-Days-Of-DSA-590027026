/*
Problem:
Given a sorted array of n integers, remove duplicates in-place.
Print only the unique elements in order.
*/

#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if(n > 0) {
        int k = 1;

        for(int i = 1; i < n; i++) {
            if(arr[i] != arr[k - 1]) {
                arr[k] = arr[i];
                k++;
            }
        }

        printf("Unique elements:\n");
        for(int i = 0; i < k; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}