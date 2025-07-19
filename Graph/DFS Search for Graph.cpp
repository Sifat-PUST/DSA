#include<bits/stdc++.h>
#define Max 20
using namespace std;
int head=-1;
int Stack[Max];
void push(int value)
{
    if(head==Max)
        cout<<"Stack OverFlow"<<endl;
    else
    {
        head++;
        Stack[head]=value;
    }
}
int pop()
{
    if(head==-1)
    {
        cout<<"Stack is UnderFlow."<<endl;
    }
    else
    {
        int x=Stack[head];
        head--;
        return x;
    }
}
void print(int* a,short size)
{
    for(short i=0;i<size;i++)
        cout<<*(a+i)<<" ";
    cout<<endl;
}
int getIndex(int* Vertex,int key,int size)
{
    for(int i=0;i<size;i++)
    {
        if(*(Vertex+i)==key)
        {
            return i;
        }
    }
}
bool isPresent(int* Visit_list,int key,int size)
{
    bool b=true;
    for(int i=0;i<size;i++)
    {
        if(*(Visit_list+i)==key)
            return false;
    }
    return b;
}
int main()
{
    int i,j;
    int Vertex[6]={5,10,15,20,30,40};
    int Visit_list[6]={0};
    bool Graph[6][6]={{0,1,1,1,0,0},{1,0,1,0,1,0},{1,1,0,1,1,0},{1,0,1,0,0,1},{0,1,1,0,0,1},{0,0,0,1,1,0}};
    push(Vertex[0]);
    Visit_list[0]=pop();
    for(int i=0;i<6;i++)
    {
        int k=getIndex(Vertex,Visit_list[i],6);
        for(int j=0;j<6;j++)
        {
            if(Graph[k][j]==1)
            {
                if(isPresent(Visit_list,Vertex[j],6))
                {
                    push(Vertex[j]);
                }
            }
            cout<<"Stack :"<<endl;
            print(Stack,10);
        }
        cout<<endl;
        Visit_list[i+1]=pop();
    }
    cout<<"DFS Search :"<<endl;
    print(Visit_list,6);
}

