#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,cols;
    cout<<"Row? : ";
    cin>>row;
    cout<<"Cols? : ";
    cin>>cols;
    float A[row][cols],B[row][cols],C[row][cols];
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<cols;j++)
     {
         cout<<"A["<<i+1<<"]["<<j+1<<"]:";
         cin>>A[i][j];
     }
    }
    cout<<" "<<endl;

      for(int i=0;i<row;i++)
    {
     for(int j=0;j<cols;j++)
     {
         cout<<"B["<<i+1<<"]["<<j+1<<"]:";
         cin>>B[i][j];
     }
    }
    cout<<"\t "<<endl;
        cout<<"Matrix A:"<<endl;

        for(int i=0;i<row;i++)
    {
     for(int j=0;j<cols;j++)
     {
      cout<<A[i][j]<<" ";
     }
     cout<<" "<<endl;
    }
    cout<<"Matrix B :"<<endl;
       for(int i=0;i<row;i++)
    {
     for(int j=0;j<cols;j++)
     {
      cout<<B[i][j]<<" ";
     }
     cout<<"\t "<<endl;
    }
    cout<<"A+B : "<<endl;
        for(int i=0;i<row;i++)
    {
     for(int j=0;j<cols;j++)
     {
         C[i][j]=A[i][j]+B[i][j];
         cout<<C[i][j]<<" ";
     }
     cout<<" "<<endl;
    }
    cout<<"\t"<<endl;
      cout<<"A-B : "<<endl;
        for(int i=0;i<row;i++)
    {
     for(int j=0;j<cols;j++)
     {
         C[i][j]=A[i][j]-B[i][j];
         cout<<C[i][j]<<" ";
     }
     cout<<" "<<endl;
    }

    getch();
}
