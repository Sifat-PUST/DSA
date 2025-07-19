#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter Row & Col:   ";
    cin>>x>>y;
  float matrix[x][y];
  for(int i=0;i<x;i++)
  {
      for(int j=0;j<y;j++)
      {
          cout<<"Point["<<i+1<<"]["<<j+1<<"] : ";
          cin>>matrix[i][j];
      }
      cout<<" \t "<<endl;
  }
 for(int i=0;i<x;i++)
  {
      for(int j=0;j<y;j++)
      {
          cout<<matrix[i][j]<<"   ";
      }

      cout<<"   "<<endl;
      cout<<"   "<<endl;
  }




    getch();
}
