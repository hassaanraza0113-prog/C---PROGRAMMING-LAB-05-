#include <stdio.h>
#include <math.h>

int main()
{
    float accuracy, confidence;
    int datasetSize;
    int permission;
    int role;
    int status;

    float modelScore;
    int ready;

    printf("AI Model Decision System\n\n");

    printf("Enter model accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter model confidence: ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("\nUser Roles:\n");
    printf("1. Admin\n");
    printf("2. Developer\n");
    printf("3. Researcher\n");

    printf("Enter your role: ");
    scanf("%d", &role);

    printf("\nModel Status:\n");
    printf("1. Ready\n");
    printf("2. Testing\n");
    printf("3. Training\n");

    printf("Enter model status: ");
    scanf("%d", &status);

    printf("\nPermissions:\n");
    printf("1 = View\n");
    printf("2 = Train\n");
    printf("4 = Test\n");
    printf("8 = Deploy\n");

    printf("Enter permission value: ");
    scanf("%d", &permission);

    // Calculate model score
    modelScore = (accuracy + confidence) / 2;

    printf("\nModel Score = %.2f\n", modelScore);

    // Check if the model is ready for deployment
    if (accuracy >= 80 &&
        confidence >= 75 &&
        datasetSize >= 1000 &&
        status == 1 &&
        (permission & 8))
    {
        ready = 1;
    }
    else
    {
        ready = 0;
    }

    if (ready)
    {
        printf("Deployment Status: Ready for Deployment\n");
    }
    else
    {
        printf("Deployment Status: Not Ready\n");
    }

    // Display the user's role
    switch (role)
    {
        case 1:
            printf("User Role: Admin\n");
            break;

        case 2:
            printf("User Role: Developer\n");
            break;

        case 3:
            printf("User Role: Researcher\n");
            break;

        default:
            printf("User Role: Invalid\n");
    }

    // Display model status
    switch (status)
    {
        case 1:
            printf("Model Status: Ready\n");
            break;

        case 2:
            printf("Model Status: Testing\n");
            break;

        case 3:
            printf("Model Status: Training\n");
            break;

        default:
            printf("Model Status: Invalid\n");
    }

    // Check permissions using bitwise AND
    printf("\nUser Permissions:\n");

    if (permission & 1)
        printf("View: Allowed\n");

    if (permission & 2)
        printf("Train: Allowed\n");

    if (permission & 4)
        printf("Test: Allowed\n");

    if (permission & 8)
        printf("Deploy: Allowed\n");

    // Example of ternary operator
    printf("\nAccess Result: %s\n",
           (permission & 8) ? "Deployment Permission Available"
                            : "Deployment Permission Not Available");

    // Using sizeof
    printf("Size of model score variable = %zu bytes\n",
           sizeof(modelScore));

    // Using math.h
    printf("Rounded Model Score = %.0f\n", round(modelScore));

    return 0;
}
