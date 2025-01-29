#include <stdio.h>

void showMenu();
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
}

int main()
{
    int choice, num1, num2, result;

    while (1)
    {
        showMenu();
        printf("Enter your choice (1-4, 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice)
        {
        case 1:
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 4:
            result = divide(num1, num2);
            if (num2 != 0)
                printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void showMenu()
{
    printf("\n*** Simple Calculator ***\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("0. Exit\n");
    printf("*************************\n");
}
