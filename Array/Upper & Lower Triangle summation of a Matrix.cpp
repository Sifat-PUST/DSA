#include<iostream>
#include<conio.h>
using namespace std;
void TriSum(int row,int cols)
{
    float A[row][cols];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"]:"<<" ";
            cin>>A[i][j];
        }
    }
    float sum=0;
    cout<<" "<<endl<<"Summation Of Upper TriAngle : ";
       for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i<j)
            {
              sum+=A[i][j];
            }
        }
    }
    cout<<sum<<endl;

    sum=0;
    cout<<" "<<endl<<"Matrix TrAsH : ";
       for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i==j)
            {
              sum+=A[i][j];
            }
        }
    }
    cout<<sum<<endl;






    sum=0;
    cout<<" "<<endl<<"Summation Of Lower TriAngle : ";
       for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i>j)
            {
              sum+=A[i][j];
            }
        }
    }
    cout<<sum<<endl;
}
int main()
{
    int row,cols;
    cout<<"How Many Rows? :";
    cin>>row;
    cout<<"How Many Columns? :";
    cin>>cols;
    TriSum(row,cols);









    getch();
}
