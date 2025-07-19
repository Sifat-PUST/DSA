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
int Heapfy(int n,int m,int x[])
{
    if(m==0)
    {
        swap(&x[1],&x[n]);
        return x[n];
    }
    else
    {
    int L=m*2;
    int R=L+1;
    if(R>n)
    {
        if(x[L]>x[m])
        swap(&x[L],&x[m]) ;
    }
    else
    {
      if(x[L]>x[R]&&x[L]>x[m])
        swap(&x[L],&x[m]);
      else if(x[R]>x[L]&&x[R]>x[m])
      {
          swap(&x[R],&x[m]);
      }
    }
    }
    return Heapfy(n,m-1,x);
     //printf("v=%i ",value);
}
int main()
{
    int size,i,j,k,*x,left,right;
    printf("Array Size :");
    scanf("%i",&size);
    x=(int *)calloc(size,sizeof(int));//It Form X[size], Array.....
    for(i=1;i<=size;i++)
       scanf("%i",&x[i]);
    //Heapfy(size,size/2,x)   ;
    for(i=size;i!=0;i--)
    {
        x[i]=Heapfy(i,i/2,x);
    }
    for(i=1;i<=size;i++)
    {
        printf("%i ",x[i]);
    }
}
/*#include<stdio.h>
#include<stdlib.h>
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    //return x,y;
}
int Heapfy(int n,int x[])
{
    static int p=0;
    int m,value;
    p++;
    if(p==0)
       m=n/2;
    else
      m=n;
    if(m==0)
    {
        return value=x[1];
    }
    else
    {
    int L=m*2;
    int R=L+1;
    if(R>n)
    {
        if(x[L]>x[m])
        swap(&x[L],&x[m]) ;
    }
    else
    {
      if(x[L]>x[R]&&x[L]>x[m])
        swap(&x[L],&x[m]);
      else if(x[R]>x[L]&&x[R]>x[m])
      {
          swap(&x[R],&x[m]);
      }
    }
    }
     value=Heapfy(m-1,x);
     printf("%i ",value);
}
int main()
{
    int size,i,j,k,*x,left,right;
    printf("Array Size :");
    scanf("%i",&size);
    x=(int *)calloc(size,sizeof(int));//It Form X[size], Array.....
    for(i=1;i<=size;i++)
       scanf("%i",&x[i]);
    Heapfy(size,x)   ;
    /*for(i=size;i!=0;i--)
    {
        x[i]=Heapfy(i,x);
        printf("%i ",x[i]);
    }*/
