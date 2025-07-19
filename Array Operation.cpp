#include<bits/stdc++.h>
using namespace std;
void print(int *a,int n)
{
    system("cls");
    cout<<"List :";
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}
void fillArray(int *a,int n)
{
    int element;
    cout<<"Enter Elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        *(a+i)=element;
    }
}
void push(int *a,int *n)
{
    *n+=1;
    int element,pos;
    cout<<"Enter Position :";
    cin>>pos;
    pos-=1;
    a=(int*)realloc(a,*n*sizeof(int));
    for(int i=*n;i!=pos;i--)
    {
        *(a+i)=*(a+i-1);
    }
    cout<<"Enter Element :";
    cin>>element;
    *(a+pos)=element;
}
void pop(int *a,int *n)
{
    int pos;
    cout<<"Enter Position to Delete :";
    cin>>pos;
    pos-=1;
    for(int i=pos;i<*n;i++)
    {
        *(a+i)=*(a+i+1);
    }
    *n-=1;
}
void menu()
{
    cout<<"Click 1 : To Push Element.."<<endl;
    cout<<"Click 2 : To Delete Element.."<<endl;
    cout<<"Click 0 : To Exit Pogram.."<<endl;
}
void Operation(int *a,int *n)
{
    int choice;
    menu();
    cout<<"Enter Choice :";
    cin>>choice;
    switch(choice)
    {
    case 1:
        push(a,n);
        break;
    case 2:
        pop(a,n);
        break;
    case 0:
        exit(0);
        break;
    default:
        return;
    }
}
int main()
{
    int size;
    cout<<"Enter Size of Array :";
    cin>>size;
    int *list=new int[size];
    fillArray(list,size);
    while(true)
    {
        print(list,size);
        Operation(list,&size);
    }
}
