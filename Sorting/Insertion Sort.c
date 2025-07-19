 #include<stdio.h>
#include<stdlib.h>
int main()
{
   int size,i,j,k,temp;
   printf("Element number :") ;
   scanf("%i",&size);
   int *x;
   x=(int *) malloc(size*sizeof(int));
   for(i=0;i<size;i++)
    scanf("%i",&x[i]);
    /*3 2 5 4 1
      2 3 5 4 1
      2 3 5 4 1
      2 3 4 5 1
      1 2 3 4 5*/
   for(i=0;i<size-1;i++)
   {
       for(j=i+1;j!=0;j--)
       {
           if(x[j-1]>=x[j])
           {
               temp=x[j-1];
               x[j-1]=x[j];
               x[j]=temp;
           }
       }
    for(k=0;k<size;k++)
    printf("%i ",x[k]);
    printf("\n");
   }
}
