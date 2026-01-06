#include <stdio.h>

int main() {
    int i, j, k;

    // Q.1 Right half triangle pattern (41, 41 42, ...)
    printf("--- Q.1 ---\n");
    for (i = 41; i <= 45; i++) {
        for (j = 41; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // Q.2 Floyd's triangle pattern (11, 12 13, ...)
    printf("--- Q.2 ---\n");
    int count = 11;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    printf("\n");

    // Q.3 Left half triangle pattern (Leading spaces)
    printf("--- Q.3 ---\n");
    for (i = 5; i >= 1; i--) {
        // Spaces
        for (j = 1; j < i; j++) {
            printf("  ");
        }
        // Numbers
        for (k = i; k <= 5; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    printf("\n");

    // Q.4 Inverted Left half triangle (1 0 1 0 1)
    printf("--- Q.4 ---\n");
    for (i = 5; i >= 1; i--) {
        // Spaces
        for (j = 5; j > i; j--) {
            printf("  ");
        }
        // Numbers (Alternating 1 and 0)
        for (k = 1; k <= i; k++) {
            printf("%d ", k % 2 != 0 ? 1 : 0);
        }
        printf("\n");
    }
    printf("\n");

    // Q.5 Full Pyramid pattern
    printf("--- Q.5 ---\n");
    for (i = 1; i <= 5; i++) {
        // Left padding spaces
        for (j = 5; j > i; j--) {
            printf("  ");
        }
        // Increasing numbers
        for (j = (5 - i + 1); j <= 5; j++) {
            printf("%d ", j);
        }
        // Decreasing numbers
        for (j = 4; j >= (5 - i + 1); j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // Q.6 Custom numeric pattern (Mirror pattern)
    printf("--- Q.6 ---\n");
    for (i = 1; i <= 5; i++) {
        // Left numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Middle spaces
        for (j = 1; j <= (5 - i) * 2; j++) {
            printf("  ");
        }
        // Right numbers
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // Q.7 Custom alphabetic pattern (The letter 'A' style)
    printf("--- Q.7 ---\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            // Logic for stars: Top row, middle row, and side columns
            if (i == 1 || i == 3 || j == 1 || j == 5) {
                // Remove right side star for rows 4 and 5 to match visual
                if ((i == 4 || i == 5) && j == 5) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}