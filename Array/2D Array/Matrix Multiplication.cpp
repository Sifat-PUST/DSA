#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int arow,acols,brow,bcols;
   cout<<"Enter First Matrix Row : " ;
   cin>>arow;
   cout<<"Enter First Matrix Column : " ;
   cin>>acols;
   cout<<"Enter Second Matrix Row : " ;
   cin>>brow;
   cout<<"Enter Second Matrix Column : " ;
   cin>>bcols;

   float A[arow][acols],B[brow][bcols],C[arow][bcols];
   if(acols==brow)
   {    cout<<"Input Data for First Matrix! "<<endl;
       for(int i=0;i<arow;i++)
       {
           for(int j=0;j<acols;j++)
           {
               cout<<"A["<<i+1<<"]["<<j+1<<"]:";
               cin>>A[i][j];
           }
           cout<<" "<<endl;
       }
          cout<<"\t"<<endl;
       cout<<"Input Data for Second Matrix! "<<endl;
         for(int i=0;i<brow;i++)
       {
           for(int j=0;j<bcols;j++)
           {
               cout<<"A["<<i+1<<"]["<<j+1<<"]:";
               cin>>B[i][j];
           }
           cout<<" "<<endl;
       }
       cout<<"\t"<<endl;
       cout<<"First Matrix:A "<<endl;
           for(int i=0;i<arow;i++)
       {
           for(int j=0;j<acols;j++)
           {
               cout<<A[i][j]<<" ";

           }
           cout<<" "<<endl;
       }
       cout<<"\t"<<endl;
           cout<<"Second Matrix:B "<<endl;
            for(int i=0;i<brow;i++)
       {
           for(int j=0;j<bcols;j++)
           {
               cout<<B[i][j]<<" ";

           }
           cout<<" "<<endl;
       }
       cout<<"\t"<<endl;

       for(int k=0;k<bcols;k++)
       {
           for(int i=0;i<arow;i++)
           {   int sum=0;
               for(int j=0;j<acols;j++)
               {
                sum+=A[i][j]*B[j][k];
               }
               C[i][k]=sum;
           }

       }
               cout<<"\t"<<endl;
           cout<<"A x B ::"<<endl;
            for(int i=0;i<arow;i++)
       {
           for(int j=0;j<bcols;j++)
           {
               cout<<C[i][j]<<" ";

           }
           cout<<" "<<endl;
       }


   }
   else
   cout<<" eRRoR! First Matrix Column Number Have to Be Same Second Matrix Row Number. "<<endl<<"Please Try Again, Thank You.";


    getch();

}
