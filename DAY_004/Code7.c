/*
Problem:
Given an array of n integers, reverse the array in-place using the two-pointer approach.
*/

#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int left, right, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    left = 0;
    right = n - 1;

    while(left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}