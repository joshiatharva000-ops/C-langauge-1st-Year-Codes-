#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    // Display menu
    printf("------ Simple Calculator ------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
   
    // Take user's choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Enter two numbers
    printf("Enter two numbers:\n");

    scanf("%f %f", &num1, &num2);
    if (choice == 1) {
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 2) {
        result = num1 - num2;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 3) {
        result = num1 * num2;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 4) {
          result = num1 / num2;
          printf("Your Answer is = %.2f\n", result);
 }
    else {
        printf("Invalid choice! Please or select 1-4.\n");
    }

    return 0;
}