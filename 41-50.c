#include <stdio.h>

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

int main() {
    indexOfMinMax();
    return 0;
}
#include <stdio.h>

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

int main() {
    indexOfMinMaxMatrix();
    return 0;
}
#include <stdio.h>

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

int main() {
    matrixTranspose();
    return 0;
}
#include <stdio.h>

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

int main() {
    matrixSum();
    return 0;
}
#include <stdio.h>

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

int main() {
    matrixMultiplication();
    return 0;
}
#include <stdio.h>

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

int main() {
    matrixSubtraction();
    return 0;
}
#include <stdio.h>
//47. Simple-Calculator
// Function to add two numbers
float add(float x, float y) {
    return x + y;
}

// Function to subtract two numbers
float subtract(float x, float y) {
    return x - y;
}

// Function to multiply two numbers
float multiply(float x, float y) {
    return x * y;
}

// Function to divide two numbers
float divide(float x, float y) {
    if (y != 0)
        return x / y;
    else
        return -1; // Return -1 to indicate error (division by zero)
}

int main() {
    int choice;
    float num1, num2;

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice (1/2/3/4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            printf("The result is: %.2f\n", add(num1, num2));
            break;
        case 2:
            printf("The result is: %.2f\n", subtract(num1, num2));
            break;
        case 3:
            printf("The result is: %.2f\n", multiply(num1, num2));
            break;
        case 4:
            if (num2 == 0)
                printf("Error! Division by zero.\n");
            else
                printf("The result is: %.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid input! Please choose a valid operation.\n");
    }

    return 0;
}

#include <stdio.h>

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

int main() {
    swapUsingFunction();
    return 0;
}
#include <stdio.h>

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

int main() {
    factorialUsingFunction();
    return 0;
}
#include <stdio.h>

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

int main() {
    factorialUsingRecursion();
    return 0;
}
