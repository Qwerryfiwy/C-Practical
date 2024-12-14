#include <stdio.h>

void averageTwoItems() {
    float weight1, weight2, purchase1, purchase2, average;

    // Input the weight and number of purchases for the first item
    printf("Enter weight of first item: ");
    scanf("%f", &weight1);
    printf("Enter number of purchases for first item: ");
    scanf("%f", &purchase1);

    // Input the weight and number of purchases for the second item
    printf("Enter weight of second item: ");
    scanf("%f", &weight2);
    printf("Enter number of purchases for second item: ");
    scanf("%f", &purchase2);

    // Calculate the average value
    average = ((weight1 * purchase1) + (weight2 * purchase2)) / (purchase1 + purchase2);

    // Print the result
    printf("Average value of the items: %.2f\n", average);
}

int main() {
    averageTwoItems(); // Call the function to calculate the average
    return 0;
}
