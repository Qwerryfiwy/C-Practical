11.#include <stdio.h>

/*
Question: Write a program to convert a given temperature from Fahrenheit to Celsius or Celsius to Fahrenheit based on the user's choice.
*/

int main() {
    int choice;
    float temperature;

    // Prompt user for conversion type
    printf("Choose conversion type:\n1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n");
    scanf("%d", &choice);

    // Input temperature value
    printf("Enter temperature: ");
    scanf("%f", &temperature);

    if (choice == 1) {
        // Convert Fahrenheit to Celsius
        float celsius = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else if (choice == 2) {
        // Convert Celsius to Fahrenheit
        float fahrenheit = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}

12#include <stdio.h>

/*
Question: Write a program to check whether a given character is an alphabet, digit, or neither.
*/

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check if the character is an alphabet
        printf("%c is an alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        // Check if the character is a digit
        printf("%c is a digit.\n", ch);
    } else {
        // If neither alphabet nor digit
        printf("%c is neither an alphabet nor a digit.\n", ch);
    }
    return 0;
}

13#include <stdio.h>

/*
Question: Write a program to check whether a given alphabet is a vowel or consonant.
*/

int main() {
    char ch;

    // Input an alphabet
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    // Convert uppercase to lowercase for easy checking
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    // Check for vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }
    return 0;
}

14.#include <stdio.h>

/*
Question: Write a program to find the smallest of two numbers.
*/

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Compare the two numbers and print the smallest
    if (a < b) {
        printf("The smallest number is: %d\n", a);
    } else {
        printf("The smallest number is: %d\n", b);
    }
    return 0;
}

15.#include <stdio.h>

/*
Question: Write a program to find the largest of three numbers.
*/

int main() {
    int a, b, c;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Compare numbers and find the largest
    if (a >= b && a >= c) {
        printf("The largest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is: %d\n", b);
    } else {
        printf("The largest number is: %d\n", c);
    }
    return 0;
}

16.#include <stdio.h>

/*
Question: Write a program to implement a simple calculator that performs addition, subtraction, multiplication, and division based on the user's choice of operator.
*/

int main() {
    float num1, num2;
    char operator;

    // Input the operands and operator
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operation based on the operator
    switch (operator) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}

17.#include <stdio.h>
#include <math.h>

/*
Question: Write a program to calculate the roots of a quadratic equation given the coefficients a, b, and c.
*/

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    return 0;
}

18.#include <stdio.h>

/*
Question: Write a program to determine in which quadrant a given coordinate point (x, y) lies. 
The point can lie in one of the four quadrants or on the axes.
*/

int main() {
    float x, y;

    // Input the coordinates of the point
    printf("Enter coordinates (x, y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        // Point lies in Quadrant I
        printf("The point (%.2f, %.2f) lies in Quadrant I.\n", x, y);
    } else if (x < 0 && y > 0) {
        // Point lies in Quadrant II
        printf("The point (%.2f, %.2f) lies in Quadrant II.\n", x, y);
    } else if (x < 0 && y < 0) {
        // Point lies in Quadrant III
        printf("The point (%.2f, %.2f) lies in Quadrant III.\n", x, y);
    } else if (x > 0 && y < 0) {
        // Point lies in Quadrant IV
        printf("The point (%.2f, %.2f) lies in Quadrant IV.\n", x, y);
    } else {
        // Point lies on one of the axes
        printf("The point lies on an axis.\n");
    }
    return 0;
}

19.#include <stdio.h>

/*
Question: Write a program to calculate the gross salary of an employee. 
The gross salary is calculated based on the basic salary, with a 40% DA (Dearness Allowance) and a 20% HRA (House Rent Allowance).
*/

int main() {
    float basic_salary, DA, HRA, gross_salary;

    // Input the basic salary of the employee
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate DA and HRA
    DA = 0.40 * basic_salary;
    HRA = 0.20 * basic_salary;

    // Calculate gross salary
    gross_salary = basic_salary + DA + HRA;

    // Output the gross salary
    printf("Gross Salary = %.2f\n", gross_salary);
    return 0;
}

20.#include <stdio.h>

/*
Question: Write a program to calculate the electricity bill based on the units consumed by a customer. 
The rate of electricity is different based on the number of units consumed.
If the bill exceeds 400, a 15% surcharge is applied.
If the bill is less than 100, set the minimum bill as 100.
*/

int main() {
    int customer_id, units;
    float bill, surcharge = 0;

    // Input the customer ID and units consumed
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Calculate the basic bill
    if (units <= 199) {
        bill = units * 1.20;
    } else if (units >= 200 && units <= 500) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }

    // Apply surcharge if applicable
    if (bill > 400) {
        surcharge = 0.15 * bill;
    }

    // Final bill with surcharge
    bill += surcharge;

    // Set minimum bill to 100 if the calculated bill is less
    if (bill < 100) {
        bill = 100; // Minimum bill
    }

    // Output the final bill details
    printf("Customer ID: %d\n", customer_id);
    printf("Total bill amount: %.2f\n", bill);
    return 0;
}
