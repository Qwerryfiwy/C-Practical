#include <stdio.h>

void printBlockF() {
    int height, width1, width2;

    // Taking input from the user for height and widths
    printf("Enter the height of the F: ");
    scanf("%d", &height);

    printf("Enter the width for the top part: ");
    scanf("%d", &width1);

    printf("Enter the width for the middle part (can be less than top width): ");
    scanf("%d", &width2);

    // Loop through each row
    for (int i = 0; i < height; i++) {
        if (i == 0) { // Top row
            for (int j = 0; j < width1; j++) {
                printf("#");
            }
        } else if (i == height / 2) { // Middle row
            for (int j = 0; j < width2; j++) {
                printf("#");
            }
        } else { // Other rows (just the vertical part of F)
            printf("#");
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    printBlockF(); // Call the function to print the block F
    return 0;
}
