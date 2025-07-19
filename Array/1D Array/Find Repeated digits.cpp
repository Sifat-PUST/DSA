#include<iostream>
#include<conio.h>
using namespace std;
void Repeat(int number[],int asize)
{
    for(int i=0;i<asize;i++)
    {
        cout<<"Number["<<i+1<<"]:";
        cin>>number[i];
    }

    for(int i=0;i<asize;i++)
    {    int sum=0;
        for(int j=0;j<asize;j++)
        {
            if(i!=j &&number[i]==number[j])
            {
                sum++;

            }
        }
        cout<<number[i]<<" Is Repeated "<<sum<<" Times. "<<endl;
    }
}
int main()
{
    int asize;
    cout<<"How Many Number: ";
    cin>>asize;
    int number[asize];
    Repeat(number,asize);



    getch();
}
