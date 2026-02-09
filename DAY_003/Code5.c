/*
Implement linear search to find key k in an array.
Count and display the number of comparisons performed.
*/

#include <stdio.h>

int main() {
    int n, k, arr[100], count = 0, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        count++;
        if (arr[i] == k) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d", count);

    return 0;
}