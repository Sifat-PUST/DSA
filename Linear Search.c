#include<stdio.h>
int main()
{
    int element,key;
    printf("How many element :");
    scanf("%i",&element);
    int array[element];
    printf("Enter Elements :\n");
    int i=0;
    while(i<element)
    {
        scanf("%i",&array[i]);
        i++;
    }
    printf("Enter What You Want :");
    scanf("%i",&key);
    i=0;
    while(i<element)
    {
        if(key==array[i])
            printf("%i (key) is in %i Index",key,i);
        i++;
    }
    return 0;
}
