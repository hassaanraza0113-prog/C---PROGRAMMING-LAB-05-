#include <stdio.h>

int main()
{
    int category;
    int choice;

    printf("Simple AI Chatbot\n\n");

    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. Help\n");

    printf("\n Choose a category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("\n 1. Hello \n");
            printf("2. How are you \n");
            printf("3. Goodbye \n");

            printf("Choose: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Hello! Nice to meet you.\n");
                    break;

                case 2:
                    printf("I am doing well. What about you!\n");
                    break;

                case 3:
                    printf("Goodbye! Have a nice day.\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("\n1. Programming\n");
            printf("2. Mathematics\n");
            printf("3. AI\n");

            printf("Choose: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Programming helps us to create software.\n");
                    break;

                case 2:
                    printf("Mathematics helps us to solve problems.\n");
                    break;

                case 3:
                    printf("AI allows computers to perform intelligent tasks.\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 3:
            printf("\n1. Today\n");
            printf("2. Tomorrow\n");
            printf("3. Forecast\n");

            printf("Choose: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Today's weather information is displayed here.\n");
                    break;

                case 2:
                    printf("Tomorrow's weather information is displayed here.\n");
                    break;

                case 3:
                    printf("The weather forecast is displayed here.\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 4:
            printf("\n1. About Chatbot\n");
            printf("2. Commands\n");
            printf("3. Exit\n");

            printf("Choose: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("This is a simple rule-based AI chatbot.\n");
                    break;

                case 2:
                    printf("Choose a category from the main menu.\n");
                    break;

                case 3:
                    printf("Goodbye!\n");
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
