#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double number;
    double base, exponent;

    printf("Simple Mathematical Calculator\n\n");

    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");

    printf("\nChoose an operation: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &number);

            if (number >= 0)
            {
                printf("Square Root = %.2lf\n", sqrt(number));
            }
            else
            {
                printf("Invalid input. Number cannot be negative.\n");
            }
            break;

        case 2:
            printf("Enter the base: ");
            scanf("%lf", &base);

            printf("Enter the exponent: ");
            scanf("%lf", &exponent);

            printf("Answer = %.2lf\n", pow(base, exponent));
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%lf", &number);

            printf("Absolute Value = %.2lf\n", fabs(number));
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%lf", &number);

            printf("Floor = %.2lf\n", floor(number));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &number);

            printf("Ceiling = %.2lf\n", ceil(number));
            break;

        default:
            printf("Invalid menu choice.\n");
    }

    return 0;
}
