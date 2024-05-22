#include <iostream>

#include <stdio.h>

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    } else {
        return x / y;
    }
}

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("Select operation:\n");
        printf("1.Add\n");
        printf("2.Subtract\n");
        printf("3.Multiply\n");
        printf("4.Divide\n");
        printf("5.Exit\n");

        printf("Enter choice(1/2/3/4/5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the program\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result: %.2f\n", result);
                }
                break;
            default:
                printf("Invalid input\n");
        }
    }

    return 0;
}
