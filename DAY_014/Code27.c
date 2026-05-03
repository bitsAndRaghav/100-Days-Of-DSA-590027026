// Problem: Write a program to check whether a given square matrix is an Identity Matrix.

#include <stdio.h>

int main() {
    int n, value, isIdentity = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &value);

            if (i == j && value != 1) {
                isIdentity = 0;
            }

            if (i != j && value != 0) {
                isIdentity = 0;
            }
        }
    }

    if (isIdentity) {
        printf("Identity Matrix\n");
    } else {
        printf("Not an Identity Matrix\n");
    }

    printf("Coded By : Raghav Shinghal");

    return 0;
}
