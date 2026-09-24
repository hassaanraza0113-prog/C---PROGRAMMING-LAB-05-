#include <stdio.h>

int main()
{
    int problem;
    int algorithm;

    printf("Machine Learning Algorithm Selection\n\n");

    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");

    printf("\nChoose problem type: ");
    scanf("%d", &problem);

    switch (problem)
    {
        case 1:
            printf("\n1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN\n");

            printf("Choose algorithm: ");
            scanf("%d", &algorithm);

            switch (algorithm)
            {
                case 1:
                    printf("You selected Logistic Regression.\n");
                    break;

                case 2:
                    printf("You selected Decision Tree.\n");
                    break;

                case 3:
                    printf("You selected KNN.\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("\n1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR\n");

            printf("Choose algorithm: ");
            scanf("%d", &algorithm);

            switch (algorithm)
            {
                case 1:
                    printf("You selected Linear Regression.\n");
                    break;

                case 2:
                    printf("You selected Polynomial Regression.\n");
                    break;

                case 3:
                    printf("You selected SVR.\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 3:
            printf("\n1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");

            printf("Choose algorithm: ");
            scanf("%d", &algorithm);

            switch (algorithm)
            {
                case 1:
                    printf("You selected K-Means.\n");
                    break;

                case 2:
                    printf("You selected Hierarchical Clustering.\n");
                    break;

                case 3:
                    printf("You selected DBSCAN.\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 4:
            printf("\n1. CNN\n");
            printf("2. YOLO\n");
            printf("3. R-CNN\n");

            printf("Choose algorithm: ");
            scanf("%d", &algorithm);

            switch (algorithm)
            {
                case 1:
                    printf("You selected CNN.\n");
                    break;

                case 2:
                    printf("You selected YOLO.\n");
                    break;

                case 3:
                    printf("You selected R-CNN.\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid problem type\n");
    }

    return 0;
}
