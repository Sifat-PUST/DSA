#include<bits/stdc++.h>
#define Max 20
using namespace std;
int head=0,tail=-1;
int Queue[Max];
void enQueue(int value)
{
    if(tail==Max)
        cout<<"Queue OverFlow"<<endl;
    else
    {
        tail++;
        Queue[tail]=value;
    }
}
int deQueue()
{
    if(head>tail+1)
    {
        head=0;
        tail=-1;
        cout<<"Queue is UnderFlow."<<endl;
    }
    else
    {
        int x=Queue[head];
        head++;
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
        if(*(Queue+i)==key)
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
    for(short i=0;i<node_no;i++)
    {
        for(short j=0;j<node_no;j++)
        {
            cout<<Graph[i][j]<<" ";
        }
        cout<<endl;
    }

    int Visit_list[node_no]={0};

    enQueue(Vertex[0]);
    for(int i=0;i<node_no;i++)
    {
        int k=getIndex(Vertex,Queue[head],node_no);
        for(int j=0;j<node_no;j++)
        {
            if(Graph[k][j]==1)
            {

                if(isPresent(Queue,Vertex[j],node_no))
                {
                    enQueue(Vertex[j]);
                }
            }
        }
        Visit_list[i]=deQueue();
    }
    cout<<"BFS Search Representation :";
    print(Visit_list,node_no);
}



