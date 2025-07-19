#include<bits/stdc++.h>
using namespace std;
#define MAX 5
#include<windows.h>
int leaf=-1;
int top=0;
int Queue_array[MAX];
bool isEmpty()
{
    if(leaf==-1)
        return true;
    else
        return false;
}
bool isFull()
{
    if(leaf==MAX-1)
        return true;
    else
        return false;
}
void print()
{
    system("cls");
    if(isEmpty())
        cout<<"Queue is Empty"<<endl;
    else
    {
        for(int i=top;i<=leaf;i++)
        cout<<Queue_array[i]<<" ";
        cout<<endl;
    }
}
void Push(int x)
{
    if(isFull())
    {
        cout<<"Queue OverFlow\n Can not Input More."<<endl;
        Sleep(2000);
    }
    else
    {
        leaf++;
        Queue_array[leaf]=x;
    }
}
int Pop()
{
    int x;
    if(top>leaf)
    {
        top=0;
        leaf=-1;
        cout<<"Queue UnderFlow"<<endl;
        Sleep(2000);
    }
    else
    {
        x=Queue_array[top];
        top++;
        return x;
    }
}
void menu()
{
    int choice;
    cout<<"Click 1:Push Element"<<endl;
    cout<<"Click 2:Pop Element"<<endl;
    cout<<"\tChoice :";
    cin>>choice;
    switch(choice)
    {
    case 1:
        int element;
        cout<<"Push ";
        cin>>element;
        Push(element);
        break;
    case 2:
        cout<<Pop()<<" is Poped"<<endl;
        Sleep(2000);
        break;
    default:
        break;
    }
}
int main()
{
    int element;
    while(true)
    {
        print();
        menu();
    }
}

