#include <stdio.h>

int main() {
    
    int operator_num;
    float num1, num2, result;

    
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &operator_num);

    
    printf("Enter two numbers: \n");
    scanf("%f %f", &num1, &num2);

   
    switch (operator_num) {
        case 1:
            result = num1 + num2;
            printf("Result of addition: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result of subtraction: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result of multiplication: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of division: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            break;
    }

    return 0;
}
