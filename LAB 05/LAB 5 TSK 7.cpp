#include <stdio.h>

int main()
{
    float confidence;
    float required;

    printf("Enter model confidence: ");
    scanf("%f", &confidence);

    printf("Enter required confidence threshold: ");
    scanf("%f", &required);

    if (confidence >= 90)
    {
        printf("\nConfidence Level: Very High\n");
    }
    else if (confidence >= 75)
    {
        printf("\nConfidence Level: High\n");
    }
    else if (confidence >= 50)
    {
        printf("\nConfidence Level: Moderate\n");
    }
    else
    {
        printf("\nConfidence Level: Low\n");
    }

    // Check whether the prediction can be accepted
    if (confidence >= required && confidence >= 50)
    {
        printf("Prediction Accepted\n");
    }
    else
    {
        printf("Prediction Not Accepted\n");
    }

    return 0;
}
