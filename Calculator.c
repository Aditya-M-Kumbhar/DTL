#include <stdio.h>

// ============================================
// Calculator.c - DTL Demo Project
// Team: Makarand, Om, Aditya, Kedar
// ============================================

// ---- Function Prototypes ----
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

// ---- MAIN FUNCTION | Author: Makarand ----
int main() {
    float num1, num2, result;
    int choice;

    printf("\n===== Simple Calculator =====\n");
    printf("Enter first number  : ");
    scanf("%f", &num1);
    printf("Enter second number : ");
    scanf("%f", &num2);

    printf("\nSelect Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice (1-4)  : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            result = divide(num1, num2);
            if (num2 != 0)
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            break;
        default:
            printf("Invalid choice! Enter 1-4.\n");
    }

    return 0;
}

// ---- ADD FUNCTION | Author: Om ----
float add(float a, float b) {
    return a + b;
}

// ---- SUBTRACT FUNCTION | Author: Kedar ----
float subtract(float a, float b) {
    return a - b;
}

// ---- MULTIPLY FUNCTION | Author: Aditya ----
float multiply(float a, float b) {
    return a * b;
}

// ---- DIVIDE FUNCTION | Author: Aditya ----
float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Cannot divide by zero!\n");
        return 0;
    }
    return a / b;
}