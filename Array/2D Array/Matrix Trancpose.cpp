 #include<iostream>
#include<conio.h>
using namespace std;
void TrancMatrix(int row,int cols)
{
    float A[row][cols];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"]:";
            cin>>A[i][j];
        }
    }
    cout<<" "<<endl<<"Given Matrix:"<<endl;
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    cout<<"\n"<<endl<<"Trancpose Matrix:"<<endl;
     for(int i=0;i<cols;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<A[j][i]<<" ";
        }
        cout<<" "<<endl;
    }
}
int main()
{
    int row,cols;
    cout<<"Enter Row Number:" ;
    cin>>row;
    cout<<"Enter Column Number:" ;
    cin>>cols;
    TrancMatrix(row,cols);






    getch();
}
