#include<iostream>
#include<conio.h>
using namespace std;
void MatrixTrash(int row,int cols)
{
    float A[row][cols];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
    {
        cout<<"A["<<i+1<<"]["<<j+1<<"]:"<<" ";
        cin>>A[i][j];
    }
    cout<<" "<<endl;
    }

    float sum=0;
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
    cout<<"Matrix TraSh Is: "<<sum<<endl;
}
int main()
{
    int row,cols;
    cout<<"How Many Rows? :";
    cin>>row;
    cout<<"How Many Columns? :";
    cin>>cols;
    MatrixTrash(row,cols);







    getch();
}
