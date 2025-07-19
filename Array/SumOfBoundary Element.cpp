#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int size;
    cout<<"Enter Size of Matrix :";
    cin>>size;
    int matrix[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            matrix[i][j]=rand()%10;
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==0)
                sum+=matrix[i][j];
            else if(i==size-1)
                sum+=matrix[i][j];
            else
            {
                sum+=matrix[i][0]+matrix[i][size-1];
                break;
            }
        }
    }
    cout<<"Sum of Boundary Element ="<<sum<<endl;
}
