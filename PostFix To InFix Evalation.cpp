#include<bits/stdc++.h>
using namespace std;
#define Max 50
int top=-1;
int Stack[Max];

void push(int value)
{
    if(top==Max)
        cout<<"Stack Overflow"<<endl;
    else
    {
        top++;
        Stack[top]=value;
    }
}
int pop()
{
    if(top==-1)
        cout<<"Stack UnderFlow"<<endl;
    else
    {
        int x=Stack[top];
        top--;
        return x;
    }
}
int main()
{
    string str;
    cout<<"Input PostFix Expression: ";
    cin>>str;
    cout<<str<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>47&&str[i]<58)
        {
            int x=str[i]-48;
                push(x);
        }
        else
        {
            int x=pop();
            int y=pop();
            int result;
            if(str[i]=='+')
            {
                result=y+x;
                push(result);
            }
            else if(str[i]=='-')
            {
                result=y-x;
                push(result);
            }
            else if(str[i]=='*')
            {
                result=y*x;
                push(result);
            }
            else if(str[i]=='/')
            {
                result=y/x;
                push(result);
            }
            else if(str[i]=='^')
            {
                result=pow(y,x);
                push(result);
            }
        }
    }
    cout<<"Result is: "<<Stack[top]<<endl;
}

