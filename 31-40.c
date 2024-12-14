#include <stdio.h>

/*
Question 31: Write a program to find the sum of the series: 1/1! + 2/2! + 3/3! + ... up to 7 terms.
*/

int main() {
    int sum = 0;
    for (int i = 1; i <= 7; i++) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += i / fact;
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}
#include <stdio.h>

/*
Question 32: Write a program to convert a given binary number to its decimal equivalent.
*/

int main() {
    int binary, decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
#include <stdio.h>

/*
Question 33: Write a program to calculate the sum of the series 14 + 34 + 54 + ... up to 100 terms.
*/

int main() {
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        sum += (14 + (20 * i));
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}
#include <stdio.h>

/*
Question 34: Write a program to print the following pattern:
* * *
* * *
* * *
*/

int main() {
    int rows = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

/*
Question 35: Write a program to print the following pattern:
1
1 2
1 2 3
*/

int main() {
    int rows = 3;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

/*
Question 36: Write a program to print the following pattern:
  *
 ***
*****
*/

int main() {
    int rows = 3; // Number of rows in the pattern
    int i, j;

    for (i = 1; i <= rows; i++) { // Loop through rows
        // Print spaces
        for (j = rows; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}
#include <stdio.h>

/*
Question 37: Write a program to print the following pattern:
1 0 1
0 1 0
1 0 1
*/

int main() {
    int rows = 5;  // Number of rows
    int i, j;

    for (i = 1; i <= rows; i++) {  // Loop through rows
        for (j = 1; j <= i; j++) {  // Loop through columns in each row
            // Print 1 if (i + j) is even, otherwise print 0
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");  // Move to the next line
    }
    return 0;
}
#include <stdio.h>

/*
Question 38: Write a program to print all prime numbers less than or equal to a given number.
*/

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime numbers up to %d: ", n);
    for (int i = 2; i <= n; i++) {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
#include <stdio.h>

/*
Question 39: Write a program to convert a given decimal number to its binary equivalent.
*/

int main() {
    int decimal, binary[32], index = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}
#include <stdio.h>

/*
Question 40: Write a program to find the product, sum, average, maximum, and minimum values from a list of n numbers.
*/

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n], sum = 0, max = 0, min = 1000000; // Assuming a large number for min
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    float average = (float)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}
