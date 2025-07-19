#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
void showArray(int a[],int x)
{
    int i;
    for(i=0;i<x;i++)
        printf("%i ",*(a+i));
    printf("\n");
}
int main()
{
    int x,i,choice,index;
    printf("Enter Element No. :");
    scanf("%i",&x);
    int *p=(int *)malloc(x*sizeof(int));
    int *q=p;
    printf("Enter Elements Of Array:\n");
    for(i=0;i<x;i++)
    {
        scanf("%i",p+i);
    }
    //sort(p,p+x);
    system("cls");
    while(1)
    {
    printf("Present Array :");
    showArray(q,x);
    printf("Option:\n 1.Click 1 for Insert element to Array.\n 2.Click 2 for Deleting element from Array.\n");
    printf(" 3.Click 3 To Exit Project.\nChoice:");
    scanf("%i",&choice);
    system("cls");
    if(choice==3)
    {
        printf("Project Is Closed.");
        break;
    }
    switch(choice)
    {
    case 1:
        {
            int n;
            x=x+1;
            printf("Enter Index(1 to %i) No to Insert Element :",x);
            scanf("%i",&index);
            printf("Enter Value Of the Element That You Want to Insert :");
            scanf("%i",&n);
            system("cls");
            printf("Present Array :");
            showArray(p,x-1);
            p=(int *)realloc(p,x*sizeof(int));
            for(i=x;i!=index-1;i--)
            {
                *(p+i)=*(p+i-1);
            }
            *(p+index-1)=n;
            printf("After Insertion Of The Element On Index %i The Array is :\n",index);
            showArray(q,x);
        }
        break;

    case 2:
        {
            printf("Enter Index(1 to %i) No to Insert Element :",x);
            scanf("%i",&index);
            system("cls");
            printf("Present Array :");
            showArray(p,x);
            for(i=index-1;i<x;i++)
            {
                *(p+i)=*(p+i+1);
            }
            x=x-1;
            printf("After Deletion The Element Of Index %i Array is :\n",index);
            showArray(p,x);
        }
        break;
    }
    }
}
