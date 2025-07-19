 #include<stdio.h>
#include<stdlib.h>
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    //return x,y;
}
int main()
{
    int size,i,j,k,*x,left,right;
    printf("Array Size :");
    scanf("%i",&size);
    x=(int *)calloc(size,sizeof(int));
    for(i=1;i<=size;i++)
       scanf("%i",&x[i]);
    for(i=size;i!=0;i--)
    {
        for(j=i/2;j!=0;j--)
        {
            left=j*2;
            right=j*2+1;
            if(right<=i)
            {
               if(x[left]>=x[right]&&x[left]>=x[j])
            {
               swap(&x[left],&x[j]) ;
            }
            else if(x[right]>=x[left]&&x[right]>=x[j])
            {
               swap(&x[right],&x[j]) ;
            }
            else;
            }
            else
            {
                if(x[left]>=x[j])
                    swap(&x[left],&x[j]);
            }
        }
        printf("i=%i  x[1]= %i\n",i,x[1]);
        swap(&x[1],&x[i]);
         for(k=1;k<=size;k++)
            printf("%i ",x[k]);
        printf("\n");

    }

    return 0;
}
