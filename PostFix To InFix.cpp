#include<bits/stdc++.h>
using namespace std;
#define Max 50
int top=-1;
string Stack[Max];

void push(string str)
{
    if(top==Max)
        cout<<"Stack Overflow"<<endl;
    else
    {
        top++;
        Stack[top]=str;
    }
}
string pop()
{
    if(top==-1)
        cout<<"Stack UnderFlow"<<endl;
    else
    {
        string str=Stack[top];
        top--;
        return str;
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
            string str1="";
            str1+=str[i];
            push(str1);
        }
        else
        {
            string x=pop();
            string y=pop();
            string result;
            if(str[i]=='+')
            {

                result="("+y+"+"+x+")";
                push(result);

            }
            else if(str[i]=='-')
            {
                result="("+y+"-"+x+")";
                push(result);
            }
            else if(str[i]=='*')
            {
                result="("+y+"*"+x+")";
                push(result);
            }
            else if(str[i]=='/')
            {
                result="("+y+"/"+x+")";
                push(result);
            }
            else if(str[i]=='^')
            {
                result="("+y+"^"+x+")";
                push(result);
            }
        }
    }
    cout<<"Result is: "<<Stack[top]<<endl;
}
