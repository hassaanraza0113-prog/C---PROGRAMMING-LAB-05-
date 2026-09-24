#include <stdio.h>

int main()
{
    int age;
    float income, CreditScore;
    int ExistingLoan;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your monthly income: ");
    scanf("%f", &income);

    printf("Enter your Credit score: ");
    scanf("%f", &CreditScore);

    printf("Do you have an Existing loan? (1 = Yes, 0 = No): ");
    scanf("%d", &ExistingLoan);


// Checking the eligibility criteria 

    if (age >= 21 && income >= 100000 &&
        CreditScore >= 750 && ExistingLoan == 0)
    {
        printf("\nHigh Approval Chance\n");
    }
    else if (age >= 21 && income >= 75000 &&
             CreditScore >= 650 && ExistingLoan == 1)
    {
        printf("\nManual Review Required\n");
    }
    else if (age >= 21 && income >= 50000 &&
             CreditScore >= 600)
    {
        printf("\nPossibly Eligible\n");
    }
    else
    {
        printf("\nRejected\n");
    }

    return 0;
}
