#include <stdio.h>
int main()
{
    float num1, num2;
    int choice;
 printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
 printf("\nCalculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
 printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
        {
        case 1:
            printf("Result = %.2f\n", num1 + num2);
            break;

        case 2:
            printf("Result = %.2f\n", num1 - num2);
            break;

        case 3:
            printf("Result = %.2f\n", num1 * num2);
            break;

        case 4:
            if (num2 == 0) {
                printf("Division by zero is not possible\n");
            } else {
                printf("Result = %.2f\n", num1 / num2);
            }
            break;

        default:
            printf("Invalid option\n");
    }
}
