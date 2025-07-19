#include<iostream>
#include<conio.h>
using namespace std;
void Sort(int num[],int asiz)
{
    for(int i=0;i<asiz;i++)
    {
        cout<<"Number["<<i+1<<"]= ";
        cin>>num[i];
    }
    int Max=num[0];
    for(int i=0;i<asiz;i++)
    {
        if(Max<=num[i])
        {
            Max=num[i];
        }
    }

           int Min=num[0];
    for(int i=1;i<asiz;i++)
    {
        if(Min>=num[i])
        {
            Min=num[i];
        }
    }
    cout<<"Sort By  Down to Up"<<endl;
        for(int i=0;i<Max;i++)
    {
        for(int i=0;i<asiz;i++)
        {
            if(Min==num[i])
            {
                cout<<Min<<" ";
            }
        }
        Min++;
    }
    cout<<"  "<<endl;
    cout<<"Sort By Up to Down"<<endl;
        int new_Max=Max;

    for(int i=1;i<=new_Max;i++)
    {
    for(int i=0;i<asiz;i++)
    {
        if(Max==num[i])
        {
            cout<<Max<<" ";
        }
    }
    Max--;
    }
  cout<<"   "<<endl;



}
/*
void msort(int num[],int asiz)
{
    for(int i=0;i<asiz;i++)
    {
        cout<<"Number["<<i+1<<"]=";
        cin>>num[i];
    }
     int Min=num[0];
    for(int i=1;i<asiz;i++)
    {
        if(Min>=num[i])
        {
            Min=num[i];
        }
    }
    int Max=num[0];
    for(int i=0;i<asiz;i++)
    {
        if(Max<=num[i])
        {
            Max=num[i];
        }
    }
    for(int i=0;i<Max;i++)
    {
        for(int i=0;i<asiz;i++)
        {
            if(Min==num[i])
            {
                cout<<Min<<" ";
            }
        }
        Min++;
    }

}
*/
int main()
{

    int asiz;
    cout<<"How Many Number You Wanna sort? : ";
    cin>>asiz;
    int number[asiz];
    Sort(number,asiz);
  //  msort(number,asiz);





    getch();

}
