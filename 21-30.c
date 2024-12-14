#include <stdio.h>

/*
Question 21: Write a program to calculate the library fine based on the number of days a book is returned late.
- If the book is returned after 30 days, membership is cancelled.
- If the book is returned after 10 days but within 30 days, a fine of 5 rupees is charged.
- If the book is returned after 5 days but within 10 days, a fine of 1 rupee is charged.
- If the book is returned after 0 days but within 5 days, a fine of 0.50 rupees is charged.
*/

int main() {
    int daysLate;
    printf("Enter the number of days late to return the book: ");
    scanf("%d", &daysLate);

    if (daysLate > 30) {
        printf("Membership cancelled due to late return.\n");
    } else if (daysLate > 10) {
        printf("Fine: 5 rupees\n");
    } else if (daysLate >= 6) {
        printf("Fine: 1 rupee\n");
    } else if (daysLate >= 1) {
        printf("Fine: 0.50 rupees\n");
    } else {
        printf("No fine, book returned on time.\n");
    }
    return 0;
}
#include <stdio.h>

/*
Question 22: Write a program to find the factorial of a given positive integer.
*/

int main() {
    int n, fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    printf("Factorial of %d = %d\n", n, fact);
    return 0;
}
#include <stdio.h>

/*
Question 23: Write a program to print the Fibonacci sequence and calculate the sum of the sequence for a given number of terms.
*/

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Sequence: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        sum += t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\nSum of the sequence: %d\n", sum);
    return 0;
}
#include <stdio.h>

/*
Question 24: Write a program to find the sum of digits of a given integer.
*/

int main() {
    int n, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
#include <stdio.h>

/*
Question 25: Write a program to reverse a given integer and check if the number is a palindrome.
A palindrome number is the same when read from both ends.
*/

int main() {
    int n, reversed = 0, original, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("Reversed Number: %d\n", reversed);
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

/*
Question 26: Write a program to check if a given number is an Armstrong number.
An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
*/

int main() {
    int n, sum = 0, remainder, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int original = n;

    while (original != 0) {
        original /= 10;
        ++digits;
    }
    original = n;

    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}
#include <stdio.h>

/*
Question 27: Write a program to check if a given number is a perfect number.
A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding the number itself).
*/

int main() {
    int n, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }
    return 0;
}
#include <stdio.h>

/*
Question 28: Write a program to calculate the sum of all even numbers up to a given number N.
*/

int main() {
    int n, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum of even terms: %d\n", sum);
    return 0;
}
#include <stdio.h>

/*
Question 29: Write a program to check if a given number is prime.
A prime number is a number greater than 1 that has no divisors other than 1 and itself.
*/

int main() {
    int n, isPrime = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}
#include <stdio.h>

/*
Question 30: Write a program to calculate the sum of an alternating series. 
The series is of the form: 1 - 1/2 + 1/3 - 1/4 + 1/5 - ... for 'n' terms.
*/

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (i % 2 == 0 ? -1.0 / i : 1.0 / i);
    }
    printf("Sum of the series: %.2f\n", sum);
    return 0;
}
