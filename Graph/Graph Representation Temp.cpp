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
    int Vertex[6]={5,10,15,20,30,40};
    int Visit_list[6]={0};
    bool Graph[6][6]={{0,1,1,1,0,0},{1,0,1,0,1,0},{1,1,0,1,1,0},{1,0,1,0,0,1},{0,1,1,0,0,1},{0,0,0,1,1,0}};
    enQueue(Vertex[0]);
    for(int i=0;i<6;i++)
    {
        int k=getIndex(Vertex,Queue[head],6);
        for(int j=0;j<6;j++)
        {
            if(Graph[k][j]==1)
            {

                if(isPresent(Queue,Vertex[j],6))
                {
                    enQueue(Vertex[j]);
                }
            }
        }
        Visit_list[i]=deQueue();
    }
    cout<<"BFS Search :";
    print(Visit_list,6);
}
