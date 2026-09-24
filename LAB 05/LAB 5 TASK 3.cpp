#include <stdio.h>

int main()
{
    int category;
    int choice;

    printf("Image Classification System\n\n");

    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");

    printf("\nEnter category number: ");
    scanf("%d", &category);

// Executing the classifictaion system :-

    switch (category)
    {
        case 1:
            printf("\n1. Cat\n");
            printf("2. Dog\n");
            printf("3. Bird\n");

            printf("Choose a subcategory: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("You selected Animal - Cat\n");
                    break;

                case 2:
                    printf("You selected Animal - Dog\n");
                    break;

                case 3:
                    printf("You selected Animal - Bird\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("\n 1. Car \n");
            printf("2. Bus\n");
            printf("3. Bike\n");

            printf("Choose a subcategory: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("You selected Vehicle : Car\n");
                    break;

                case 2:
                    printf("You selected Vehicle : Bus\n");
                    break;

                case 3:
                    printf("You selected Vehicle : Bike\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 3:
            printf("\n1. Pizza\n");
            printf("2. Burger\n");
            printf("3. Biryani\n");

            printf("Choose a subcategory: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("You selected Food : Pizza\n");
                    break;

                case 2:
                    printf("You selected Food : Burger\n");
                    break;

                case 3:
                    printf("You selected Food : Biryani\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 4:
            printf("\n1. Male\n");
            printf("2. Female\n");
            printf("3. Child\n");

            printf("Choose a subcategory: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("You selected Human : Male\n");
                    break;

                case 2:
                    printf("You selected Human : Female\n");
                    break;

                case 3:
                    printf("You selected Human : Child\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}
