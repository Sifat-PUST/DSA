#include<stdio.h>
#include<conio.h>
int main()
{
    int arow,acols,brow,bcols,i,j,k;
    printf("First Matrix Row :");
    scanf("%i",&arow);
    printf("First Matrix Column :");
    scanf("%i",&acols);
    printf("Second Matrix Row :");
    scanf("%i",&brow);
    printf("Second Matrix Column :");
    scanf("%i",&bcols);
    float A[arow][acols],B[brow][bcols],C[arow][bcols];
    if(acols==brow)
    {
        //For A Matrix.
         for( i=0;i<arow;i++)
    {
        for( j=0;j<acols;j++)
        {
            printf("A[%i][%i] :",i+1,j+1);
            scanf("%f",&A[i][j]);
        }
    }
    printf("A Matrix :\n");
     for( i=0;i<arow;i++)
    {
        for( j=0;j<acols;j++)
        {
            printf("%f  ",A[i][j]);

        }
        printf("\n\n");
    }
    printf("\n");
    //For B Matrix.
     for( i=0;i<brow;i++)
    {
        for( j=0;j<bcols;j++)
        {
            printf("A[%i][%i] :",i+1,j+1);
            scanf("%f",&B[i][j]);
        }
    }
    printf("B Matrix :\n");
     for( i=0;i<brow;i++)
    {
        for( j=0;j<bcols;j++)
        {
            printf("%f  ",B[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
    //For A matrix x B matrix.
     for(i=0;i<arow;i++)
    {
        for(j=0;j<bcols;j++)
        {
           float Sum=0;
            for(k=0;k<brow;k++)
            {
                Sum+=A[i][k]*B[k][j];
            }
            C[i][j]=Sum;
        }
    }
    //For Print A*B Matrix.
    printf("A x B =\n");
     for(i=0;i<arow;i++)
    {
        for(j=0;j<bcols;j++)
        {
            printf("%f  ",C[i][j]);
        }
        printf("\n\n");
    }

    }
    getch();
}

