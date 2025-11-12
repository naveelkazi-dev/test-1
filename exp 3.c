
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    /*name: kazi naveel
      UIN: 251P020
      class: comps eng
      division:C-1
      */
start:  // Label for goto

    printf("\n------ Calculator Menu ------\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            goto start;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            goto start;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            goto start;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            goto start;

        case 5:
            printf("Exiting the calculator. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
            goto start;
    }

    return 0;
}
