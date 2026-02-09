/*
Problem:
A system receives two separate logs of user arrival times from two different servers.
Each log is already sorted in ascending order. Create a single chronological log
that preserves the correct order of arrivals.
*/

#include <stdio.h>

int main() {
    int p, q;
    int a[100], b[100], c[200];
    int i = 0, j = 0, k = 0;

    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    for(int x = 0; x < p; x++) {
        printf("Enter arrival time %d for server 1: ", x + 1);
        scanf("%d", &a[x]);
    }

    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    for(int x = 0; x < q; x++) {
        printf("Enter arrival time %d for server 2: ", x + 1);
        scanf("%d", &b[x]);
    }

    while(i < p && j < q) {
        if(a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while(i < p) {
        c[k++] = a[i++];
    }

    while(j < q) {
        c[k++] = b[j++];
    }

    printf("Merged chronological log:\n");
    for(int x = 0; x < k; x++) {
        printf("%d ", c[x]);
    }

    return 0;
}