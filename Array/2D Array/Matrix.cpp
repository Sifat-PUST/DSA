
#include<iostream>
#include<conio.h>
using namespace std;
float Matrix_A(int r,int c)
{    float number[r][c];
    for(int row=0;row<r;row++)
    {
        for(int col=0;col<c;col++)
        {
            cout<<"Point["<<row+1<<"]["<<col+1<<"]:";
            cin>>number[row][col];
        }
        cout<<" "<<endl;
    }
    cout<<" "<<endl<<"Matrix A: "<<endl;
    for(int row=0;row<r;row++)
    {
        for(int col=0;col<c;col++)
        {
        cout<< number[row][col]<<" " ;
        }
        cout<<" "<<endl<<"";
    }
    cout<<" "<<endl;
}
float Matrix_B(int r,int c)
{   float number[r][c];
    for(int row=0;row<r;row++)
    {
        for(int col=0;col<c;col++)
        {
            cout<<"Point["<<row+1<<"]["<<col+1<<"]:";
            cin>>number[row][col];
        }
        cout<<" "<<endl;
    }
    cout<<" "<<endl<<"Matrix B:"<<endl;
    for(int row=0;row<r;row++)
    {
        for(int col=0;col<c;col++)
        {
            cout<<number[row][col]<<" ";
        }
        cout<<" "<<endl<<" ";
    }
    cout<<" "<<endl;
}

int main()
{

    int arow,acol;
    cout<<"Enter Row & col :";
    cin>>arow>>acol;
    Matrix_A(arow,acol);
    int brow,bcol;
    cout<<"Enter Row & col: ";
    cin>>brow>>bcol;
    Matrix_B(brow,bcol);


    getch();
}
