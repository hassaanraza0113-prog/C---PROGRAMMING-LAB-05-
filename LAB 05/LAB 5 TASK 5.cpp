#include <stdio.h>

int main()
{
    float confidence;
    int userType;

    printf("Enter face recognition confidence: ");
    scanf("%f", &confidence);

    printf("Enter user type (1 = Authorized, 0 = Unauthorized): ");
    scanf("%d", &userType);

// GRANTING FACIAL RECOGNITION 

    if (confidence >= 80 && userType == 1)
    {
        printf("\nAccess Granted\n");
    }
    else if (confidence < 50 || userType == 0)
    {
        printf("\nAccess Denied\n");
    }
    else if (confidence >= 50 && confidence <= 79)
    {
        printf("\nManual Verification Required\n");
    }
    else
    {
        printf("\nFace Recognized\n");
    }

    return 0;
}
