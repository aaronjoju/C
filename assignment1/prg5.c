// Write a program in C to make a pyramid pattern with numbers increased by multiples of  five 

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 1, num = 1; i <= rows; i++, num += 5) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print increasing numbers
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%-3d", num);
            num += 5;
        }

        printf("\n");
    }

    return 0;
}
