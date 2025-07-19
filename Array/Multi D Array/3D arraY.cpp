#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,cols,thik;
    cout<<"Enter Row no :";
    cin>>row;
    cout<<"Enter Column no :";
    cin>>cols;
    cout<<"Enter Thik no :";
    cin>>thik;
    int A[row][cols][thik];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int k=0;k<thik;k++)
            {
                cout<<"A["<<i+1<<"]["<<j+1<<"]["<<k+1<<"] :";
                cin>>A[i][j][k];
            }
        }
        cout<<" "<<endl;
    }
    float Min=A[0][0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int k=0;k<thik;k++)
            {
                if(Min>=A[i][j][k])
                    Min=A[i][j][k];
            }
        }
    }
     float Max=A[0][0][0];
        for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int k=0;k<thik;k++)
            {
              if(Max<=A[i][j][k])
                Max=A[i][j][k];
            }
        }
    }
    while(Max>=Min)
    {
          for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int k=0;k<thik;k++)
            {
                if(Min==A[i][j][k])
                    cout<<A[i][j][k]<<endl;
            }
        }
    }
    Min++;
    }
    cout<<" "<<endl;
 while(Max!=Min)
    {
          for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int k=0;k<thik;k++)
            {
                if(Max==A[i][j][k])
                    cout<<A[i][j][k]<<" ";
            }
        }
    }
    Max--;
    }



   // cout<<"Minimum Number Is :"<<Min<<endl;
   //cout<<"MaxiMum Number Is :"<<Max<<endl;

    getch();
}
