#include <stdio.h>

int main()
{
    int permission;

    printf("Enter permission value: ");
    scanf("%d", &permission);

    printf("\nPermissions:\n");

    if (permission & 1)
    {
        printf("View permission is allowed.\n");
    }

    if (permission & 2)
    {
        printf("Train permission is allowed.\n");
    }

    if (permission & 4)
    {
        printf("Test permission is allowed.\n");
    }

    if (permission & 8)
    {
        printf("Deploy permission is allowed.\n");
    }

    // Check if the user has both Train and Deploy
    
    if ((permission & 2) && (permission & 8))
    {
        printf("\nUser has both Training and Deployment permissions.\n");
    }
    else
    {
        printf("\nUser does not have both Training and Deployment permissions.\n");
    }

    return 0;
}
