#include <stdio.h>

int main()
{
    float programming, mathematics, AI , attendance;
    float average;

    printf("Enter Programming marks: ");
    scanf("%f", &programming);

    printf("Enter Mathematics marks: ");
    scanf("%f", &mathematics);

    printf("Enter AI marks: ");
    scanf("%f", &AI);

    printf("Enter Attendance percentage: ");
    scanf("%f", &attendance);

   
    // Check if the student meets all requirements
    
    
    if (programming >= 50 && mathematics >= 50 &&
        AI >= 50 && attendance >= 75)
    {
        average = (programming + mathematics + AI ) / 3;

        printf("\nStudent is Eligible.\n");
        printf("Average = %.2f\n", average);

        if (average >= 80)
        {
            printf("Performance: Excellent\n");
        }
        else if (average >= 70)
        {
            printf("Performance: Very Good\n");
        }
        else if (average >= 60)
        {
            printf("Performance: Good\n");
        }
        else if (average >= 50)
        {
            printf("Performance: Satisfactory\n");
        }
        else
        {
            printf("Performance: Poor\n");
        }
    }
    else
    {
        printf("\nStudent is Not Eligible.\n");
    }

    return 0;
}
