
// Exercises: miscellaneous
// Exercise 1

#include <stdio.h>

const int dim=100;
int i,j,fil,col;
float MatA[3][3],MatB[3][3];

int main(void)
{




    printf("\n\nEnter the first matrix:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\nInsert the element (%i,%i): ",i,j); scanf("%f", &MatA[i][j]);
        }
    }

    printf("\n\n\nEnter the second matrix:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\nInsert the element (%i,%i): ",i,j); scanf("%f", &MatB[i][j]);
        }
    }

    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++) MatA[i][j]=MatA[i][j]+MatB[i][j]; // The result is stored in matrix A
    }

    printf("\n\nThe result of the sum is:\n\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++) printf("%10f",MatA[i][j]);
        printf("\n");
    }
    return 0;
}