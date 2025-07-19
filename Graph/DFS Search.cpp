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
    system("cls");
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
    short node_no;
    cout<<"How many node?..:";
    cin>>node_no;
    int Vertex[node_no];
    short value;

    cout<<"Enter Graph Nodes :"<<endl;
    for(int i=0;i<node_no;i++)
    {
        cin>>value;
        Vertex[i]=value;
    }
    bool Graph[node_no][node_no];
    bool b;
    cout<<"Enter 0 for no Edge Or 1 for Edge. "<<endl;
    for(short i=0;i<node_no;i++)
    {
        system("cls");
        cout<<"Push Edges for "<<Vertex[i]<<" :"<<endl;
        for(short j=0;j<node_no;j++)
        {
            cin>>b;
            Graph[i][j]=b;
        }
    }
    int Visit_list[node_no]={0};
    push(Vertex[0]);
    Visit_list[0]=pop();
    for(int i=0;i<node_no;i++)
    {
        int k=getIndex(Vertex,Visit_list[i],node_no);
        for(int j=0;j<node_no;j++)
        {
            if(Graph[k][j]==1)
            {
                if(isPresent(Visit_list,Vertex[j],6))
                {
                    push(Vertex[j]);
                }
            }
        }
        Visit_list[i+1]=pop();
    }
    cout<<"DFS Search :"<<endl;
    print(Visit_list,node_no);
}


