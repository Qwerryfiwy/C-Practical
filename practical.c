#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h> 
//Head Case
void waitForKeyPressed();

// 1 - 10
void printBlockF();
void averageTwoItems();
void swapUsingThirdVar();
void swapWithoutThirdVar();
void convertSeconds();
void convertDays();
void evenOdd();
void leapYear();
void triangleType();
void triangleAngleType();

// 11 - 20
void temperatureConversion();
void isAlphabetOrDigit();
void vowelOrConsonant();
void smallestOfTwo();
void largestOfThree();
void simpleCalculator();
void quadraticRoots();
void pointQuadrant();
void grossSalary();
void electricityBill();

// 21 - 30
void libraryFine();
void factorial();
void fibonacciSequence();
void sumOfDigits();
void reverseAndPalindrome();
void isArmstrong();
void isPerfectNumber();
void sumEvenTerms();
void isPrime();
void alternatingSeriesSum();

// 31 - 40
void factorialSeriesSum();
void binaryToDecimal();
void seriesSum14Plus();
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void primeNumbersUptoN();
void decimalToBinary();
void listStats();

// 41 - 50
void indexOfMinMax();
void indexOfMinMaxMatrix();
void matrixTranspose();
void matrixSum();
void matrixMultiplication();
void matrixSubtraction();
void calculatorWithFunctions();
void swapUsingFunction();
void factorialUsingFunction();
void factorialUsingRecursion();

int main() {
    int choice;

    do {
        printf("\n======== MENU ========\n");
        printf("1. Print Block F using #\n");
        printf("2. Calculate average of two items\n");
        printf("3. Swap two variables (using third variable)\n");
        printf("4. Swap two variables (without third variable)\n");
        printf("5. Convert seconds to hours, minutes, and seconds\n");
        printf("6. Convert days into years, weeks, and days\n");
        printf("7. Check if a number is even or odd\n");
        printf("8. Check if a year is a leap year\n");
        printf("9. Check type of triangle (Equilateral, Isosceles, Scalene)\n");
        printf("10. Check type of triangle (Right, Obtuse, Acute)\n");
        printf("11. Temperature conversion (Fahrenheit/Celsius)\n");
        printf("12. Check if character is an alphabet or digit\n");
        printf("13. Check if alphabet is a vowel or consonant\n");
        printf("14. Find smallest of two numbers\n");
        printf("15. Find largest of three numbers\n");
        printf("16. Simple calculator\n");
        printf("17. Calculate roots of a quadratic equation\n");
        printf("18. Determine which quadrant a coordinate point lies in\n");
        printf("19. Calculate gross salary of an employee\n");
        printf("20. Calculate electricity bill\n");
        printf("21. Library fine calculation\n");
        printf("22. Find factorial of a number\n");
        printf("23. Fibonacci sequence\n");
        printf("24. Sum of digits of a number\n");
        printf("25. Reverse and check for palindrome\n");
        printf("26. Check if a number is Armstrong\n");
        printf("27. Check if a number is Perfect\n");
        printf("28. Sum of even terms up to N\n");
        printf("29. Check if a number is prime\n");
        printf("30. Sum of alternating series\n");
        printf("31. Sum of factorial series\n");
        printf("32. Convert binary to decimal\n");
        printf("33. Sum of series starting from 14\n");
        printf("34. Pattern printing 1\n");
        printf("35. Pattern printing 2\n");
        printf("36. Pattern printing 3\n");
        printf("37. Pattern printing 4\n");
        printf("38. Print all prime numbers up to N\n");
        printf("39. Convert decimal number to binary\n");
        printf("40. Calculate statistics (sum, average, min, max) from a list\n");
        printf("41. Index of smallest and largest element in 10 integers\n");
        printf("42. Index of smallest and largest element in 3x4 matrix\n");
        printf("43. Transpose of a matrix\n");
        printf("44. Sum of two matrices\n");
        printf("45. Multiplication of two matrices\n");
        printf("46. Subtraction of two matrices\n");
        printf("47. Simple calculator using functions\n");
        printf("48. Swap two values using functions\n");
        printf("49. Factorial of a number using function\n");
        printf("50. Factorial of a number using recursion\n");
        printf("0. Exit\n");
        printf("=======================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printBlockF(); break;
            case 2: averageTwoItems(); break;
            case 3: swapUsingThirdVar(); break;
            case 4: swapWithoutThirdVar(); break;
            case 5: convertSeconds(); break;
            case 6: convertDays(); break;
            case 7: evenOdd(); break;
            case 8: leapYear(); break;
            case 9: triangleType(); break;
            case 10: triangleAngleType(); break;
            case 11: temperatureConversion(); break;
            case 12: isAlphabetOrDigit(); break;
            case 13: vowelOrConsonant(); break;
            case 14: smallestOfTwo(); break;
            case 15: largestOfThree(); break;
            case 16: simpleCalculator(); break;
            case 17: quadraticRoots(); break;
            case 18: pointQuadrant(); break;
            case 19: grossSalary(); break;
            case 20: electricityBill(); break;
            case 21: libraryFine(); break;
            case 22: factorial(); break;
            case 23: fibonacciSequence(); break;
            case 24: sumOfDigits(); break;
            case 25: reverseAndPalindrome(); break;
            case 26: isArmstrong(); break;
            case 27: isPerfectNumber(); break;
            case 28: sumEvenTerms(); break;
            case 29: isPrime(); break;
            case 30: alternatingSeriesSum(); break;
            case 31: factorialSeriesSum(); break;
            case 32: binaryToDecimal(); break;
            case 33: seriesSum14Plus(); break;
            case 34: pattern1(); break;
            case 35: pattern2(); break;
            case 36: pattern3(); break;
            case 37: pattern4(); break;
            case 38: primeNumbersUptoN(); break;
            case 39: decimalToBinary(); break;
            case 40: listStats(); break;
            case 41: indexOfMinMax(); break;
            case 42: indexOfMinMaxMatrix(); break;
            case 43: matrixTranspose(); break;
            case 44: matrixSum(); break;
            case 45: matrixMultiplication(); break;
            case 46: matrixSubtraction(); break;
            case 47: calculatorWithFunctions(); break;
            case 48: swapUsingFunction(); break;
            case 49: factorialUsingFunction(); break;
            case 50: factorialUsingRecursion(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
        if(choice!=0){
            waitForKeyPressed();
        }
    } while (choice != 0);

    return 0;
}
//Header Function
void waitForKeyPressed(){
    printf("\n");
    printf("Press Enter to continue...");
    getchar();  // Consume the newline left from scanf
    getchar();  // Wait for user to press Enter
}

// 1. Print a block F using hash (#)
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
        if (i == 0) {  // Top row
            for (int j = 0; j < width1; j++) {
                printf("#");
            }
        } else if (i == height / 2) {  // Middle row
            for (int j = 0; j < width2; j++) {
                printf("#");
            }
        } else {  // Other rows
            printf("#");
        }
        printf("\n");  // Move to the next line
}
}
// 2. Calculate average of two items
void averageTwoItems() {
    float weight1, weight2, purchase1, purchase2, average;

    printf("Enter weight of first item: ");
    scanf("%f", &weight1);
    printf("Enter number of purchase for first item: ");
    scanf("%f", &purchase1);
    printf("Enter weight of second item: ");
    scanf("%f", &weight2);
    printf("Enter number of purchase for second item: ");
    scanf("%f", &purchase2);

    average = ((weight1 * purchase1) + (weight2 * purchase2)) / (purchase1 + purchase2);
    printf("Average value of the items: %.2f\n", average);
}

// 3. Swap two variables using a third variable
void swapUsingThirdVar() {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
}

// 4. Swap two variables without using a third variable
void swapWithoutThirdVar() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
}

// 5. Convert seconds to hours, minutes, and seconds
void convertSeconds() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("%d seconds = %d hours, %d minutes, %d seconds\n", total_seconds, hours, minutes, seconds);
}

// 6. Convert days to years, weeks, and days
void convertDays() {
    int total_days, years, weeks, days;

    printf("Enter number of days: ");
    scanf("%d", &total_days);
    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    days = (total_days%365) % 7;

    printf("%d days = %d years, %d weeks, %d days\n", total_days, years, weeks, days);
}

// 7. Check whether a number is even or odd
void evenOdd() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
}

// 8. Check whether a year is a leap year or not
void leapYear() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

// 9. Check type of triangle
void triangleType() {
    float a, b, c;

    printf("Enter lengths of the triangle sides: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == b && b == c) {
        printf("The triangle is Equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }
}

// 10. Check type of triangle by angles
void triangleAngleType() {
    float a, b, c;
    printf("Enter angles of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b + c != 180) {
        printf("Not a valid triangle.\n");
    } else if (a < 90 && b < 90 && c < 90) {
        printf("The triangle is Acute.\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("The triangle is Right-angled.\n");
    } else {
        printf("The triangle is Obtuse.\n");
    }
}

// 11. Convert temperature between Fahrenheit and Celsius
void temperatureConversion() {
    int choice;
    float temperature;

    printf("Choose conversion type:\n1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n");
    scanf("%d", &choice);
    printf("Enter temperature: ");
    scanf("%f", &temperature);

    if (choice == 1) {
        // Fahrenheit to Celsius
        float celsius = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else if (choice == 2) {
        // Celsius to Fahrenheit
        float fahrenheit = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else {
        printf("Invalid choice.\n");
    }
}

// 12. Check whether a character is an alphabet or digit
void isAlphabetOrDigit() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is neither an alphabet nor a digit.\n", ch);
    }
}

// 13. Check whether an alphabet is a vowel or consonant
void vowelOrConsonant() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // Convert to lowercase
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }
}

// 14. Find smallest of two numbers
void smallestOfTwo() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("The smallest number is: %d\n", a);
    } else {
        printf("The smallest number is: %d\n", b);
    }
}

// 15. Find largest of three numbers
void largestOfThree() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("The largest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is: %d\n", b);
    } else {
        printf("The largest number is: %d\n", c);
    }
}

// 16. Simple Calculator
void simpleCalculator() {
    float num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &num2);

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
}

// 17. Calculate the roots of a Quadratic Equation
void quadraticRoots() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

// 18. Determine in which quadrant a coordinate point lies
void pointQuadrant() {
    float x, y;

    printf("Enter coordinates (x, y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant I.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant II.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant III.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant IV.\n", x, y);
    } else {
        printf("The point lies on an axis.\n");
    }
}

// 19. Calculate gross salary of an employee
void grossSalary() {
    float basic_salary, DA, HRA, gross_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);
    DA = 0.40 * basic_salary;
    HRA = 0.20 * basic_salary;
    gross_salary = basic_salary + DA + HRA;

    printf("Gross Salary = %.2f\n", gross_salary);
}

// 20. Calculate and print the electricity bill
void electricityBill() {
    int customer_id, units;
    float bill, surcharge = 0;

    printf("Enter customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 199) {
        bill = units * 1.20;
    } else if (units >= 200 && units <= 500) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }

    if (bill > 400) {
        surcharge = 0.15 * bill;
    }

    bill += surcharge;
    if (bill < 100) {
        bill = 100; // Minimum bill
    }

    printf("Customer ID: %d\n", customer_id);
    printf("Total bill amount: %.2f\n", bill);
}

// 21. Library fine calculation
void libraryFine() {
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
}

// 22. Find factorial of a number
void factorial() {
    int n, fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    printf("Factorial of %d = %d\n", n, fact);
}

// 23. Print Fibonacci sequence and sum
void fibonacciSequence() {
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
}

// 24. Find sum of digits of an integer
void sumOfDigits() {
    int n, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits: %d\n", sum);
}

// 25. Reverse a number and check for palindrome
void reverseAndPalindrome() {
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
}

// 26. Check if a number is Armstrong
void isArmstrong() {
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
}

// 27. Check if a number is Perfect
void isPerfectNumber() {
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
}

// 28. Sum of even terms up to N
void sumEvenTerms() {
    int n, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum of even terms: %d\n", sum);
}

// 29. Check if a number is prime
void isPrime() {
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
}

// 30. Sum of alternating series
void alternatingSeriesSum() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (i % 2 == 0 ? -1.0 / i : 1.0 / i);
    }
    printf("Sum of the series: %.2f\n", sum);
}

// 31. Sum of factorial series
void factorialSeriesSum() {
    int sum = 0;
    for (int i = 1; i <= 7; i++) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += i / fact;
    }
    printf("Sum of the series: %d\n", sum);
}

// 32. Convert binary to decimal
void binaryToDecimal() {
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
}

// 33. Sum of series 14 + 34 + 54 + ... up to 100 terms
void seriesSum14Plus() {
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        sum += (14 + (20 * i));
    }
    printf("Sum of the series: %d\n", sum);
}

// 34. Print pattern 1
void pattern1() {
    int rows = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// 35. Print pattern 2
void pattern2() {
    int rows = 3;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// 36. Print pattern 3
void pattern3() {
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

}

// 37. Print pattern 4
void pattern4() {
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
}

// 38. Print all prime numbers <= a given number
void primeNumbersUptoN() {
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
}

// 39. Convert decimal to binary
void decimalToBinary() {
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
}

// 40. Find product, sum, average, max, and min from a list of n numbers
void listStats() {
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
}

// 41. Display the index of smallest and largest element in 10 integers
void indexOfMinMax() {
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < 10; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("Index of smallest element: %d\n", minIndex);
    printf("Index of largest element: %d\n", maxIndex);
}

// 42. Display the index of smallest and largest element in a 3x4 matrix
void indexOfMinMaxMatrix() {
    int matrix[3][4];
    printf("Enter 12 integers for a 3x4 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int minIndexRow = 0, minIndexCol = 0;
    int maxIndexRow = 0, maxIndexCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] < matrix[minIndexRow][minIndexCol]) {
                minIndexRow = i;
                minIndexCol = j;
            }
            if (matrix[i][j] > matrix[maxIndexRow][maxIndexCol]) {
                maxIndexRow = i;
                maxIndexCol = j;
            }
        }
    }

    printf("Index of smallest element: (%d, %d)\n", minIndexRow+1, minIndexCol+1);
    printf("Index of largest element: (%d, %d)\n", maxIndexRow+1, maxIndexCol+1);
}

// 43. Accept N*N matrix and print its transpose
void matrixTranspose() {
    int n;
    printf("Enter the size of the matrix (N): ");
    scanf("%d", &n);
    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}

// 44. Accept two matrices and find their sum
void matrixSum() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// 45. Find the product of two matrices
void matrixMultiplication() {
    int r1, c1, r2, c2;
    printf("Enter the order of first matrix (rows columns): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the order of second matrix (rows columns): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return;
    }

    int matrix1[r1][c1], matrix2[r2][c2], product[r1][c2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize product matrix to zero
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}

// 46. Subtraction of two matrices
void matrixSubtraction() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);
    int matrix1[rows][cols], matrix2[rows][cols], difference[rows][cols];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("Difference of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }
}

// 47. Simple Calculator using functions
void calculatorWithFunctions() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum: %d\n", a + b);
            break;
        case 2:
            printf("Difference: %d\n", a - b);
            break;
        case 3:
            printf("Product: %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Quotient: %.2f\n", (float)a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
}

// 48. Swap two values using function
void swapUsingFunction() {
    int a, b;
    printf("Enter two values to swap: ");
    scanf("%d %d", &a, &b);

    // Swapping using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
}

// 49. Calculate the factorial of a number using a function
void factorialUsingFunction() {
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", n, factorial);
}

// 50. Calculate the factorial of a number using recursion
int facto(int n) {
    if (n == 0 || n == 1) return 1;
    return n * facto(n - 1);
}

void factorialUsingRecursion() {
    int n;
    printf("Enter a number to find its factorial using recursion: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d\n", n, facto(n));
}