// Problem: Given a matrix, calculate the sum of its primary diagonal elements.

#include <stdio.h>

int main() {
    int m, n, value, sum = 0;

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &value);

            if (i == j) {
                sum += value;
            }
        }
    }

    printf("%d\n", sum);
    printf("Coded By : Raghav Shinghal");

    return 0;
}
