// Problem: Check whether a matrix is symmetric

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter elements of matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    if(m != n) {
        printf("Not a Symmetric Matrix");
    } else {
        int flag = 1;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(A[i][j] != A[j][i]) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 0) break;
        }

        if(flag)
            printf("Symmetric Matrix");
        else
            printf("Not a Symmetric Matrix");
    }

    printf("\nCoded By: Raghav Shinghal");

    return 0;
}