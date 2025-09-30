#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Count non-zero elements
    int count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] != 0) {
                count++;
            }
        }
    }

    // Print triplet representation
    printf("\nTriplet Representation:\n");
    printf("%d %d %d\n", r, c, count);  // first row
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] != 0) {
                printf("%d %d %d\n", i, j, a[i][j]);
            }
        }
    }

    return 0;
}

