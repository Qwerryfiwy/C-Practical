6. Convert Days to Years, Weeks, and Days
  #include <stdio.h>

int main() {
    int total_days, years, weeks, remaining_days;

    printf("Enter number of days to convert: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    remaining_days = (total_days % 365) % 7;

    printf("%d days = %d years, %d weeks, %d days\n", total_days, years, weeks, remaining_days);

    return 0;
}
7.Check Whether a Number is Even or Odd
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer to check even or odd: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
8.Check Whether a Year is a Leap Year
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year to check for leap year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
9. Check Type of Triangle by Sides
#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}
10.Check Type of Triangle by Angles
#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 != 180) {
        printf("Not a valid triangle.\n");
    } else if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
        printf("The triangle is Acute.\n");
    } else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle is Right-angled.\n");
    } else {
        printf("The triangle is Obtuse.\n");
    }

    return 0;
}

