#include<stdio.h>
int main()
{
    int elements;
    printf("How Many Elements :");
    scanf("%i",&elements);
    int num[elements],temp,lite;
    printf("Enter Elements :\n");
    int i,j,k;
    for(i=0; i<elements; i++)
    {
        scanf("%i",&num[i]);
    }
    i=0;
    while(i<elements-1)
    {
        j=0;
        while(j<elements-i-1)
        {
            if(num[j]>=num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
            else;
            j++;
        }
        i++;
        for(k=0; k<elements; k++)
        {
            printf("%i\t",num[k]);
        }
        printf("\n\n");
    }
    printf("\n\n");
    printf("Bubble Sorted Array is :\n");
     for(k=0; k<elements; k++)
        {
            printf("%i\t",num[k]);
        }

    return 0;
}
