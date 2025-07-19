#include<bits/stdc++.h>
using namespace std;
#define MAX 5
#include<windows.h>
int top=-1;
int stack_array[MAX];
bool isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}
bool isFull()
{
    if(top==MAX-1)
        return true;
    else
        return false;
}
void print()
{
    system("cls");
    if(isEmpty())
        cout<<"Stack is Empty"<<endl;
    else
    {
        for(int i=0;i<=top;i++)
        cout<<stack_array[i]<<" ";
        cout<<endl;
    }
}
void Push(int x)
{
    if(isFull())
    {
        cout<<"Stack OverFlow\n Can not Input More."<<endl;
        Sleep(2000);
    }
    else
    {
        top++;
        stack_array[top]=x;
    }
}
int Pop()
{
    int x;
    if(isEmpty())
    {
        cout<<"Stack UnderFlow"<<endl;
        Sleep(2000);
    }
    else
    {
        x=stack_array[top];
        top--;
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
