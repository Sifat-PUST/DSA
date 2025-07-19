#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int name;
    node *pre,*next;
}node;
node* creat_list(node**p)
{
    int node_no;
    int name;
    cout<<"Element Number: ";
    cin>>node_no;
    node *tail,*tem=*p;
    cin>> name;
    tem->pre=NULL;
    tem->name=name;
    tem->next=NULL;
    for(int i=0;i<node_no-1;i++)
    {
        cin>>name;
        tail=(node*)malloc(sizeof(node));
        tail->pre=NULL;
        tail->name=name;
        tail->next=NULL;
        tem->next=tail;
        tail->pre=tem;
        tem=tem->next;
    }
    return tem;
}
void print_list_forward(node*p)
{
    cout<<"List is: ";
    while(p!=NULL)
    {
        cout<<p->name<<" ";
        p=p->next;
    }
    cout<<endl;
}
void print_list_backword(node*p)
{
    cout<<"List is: ";
    while(p!=NULL)
    {
        cout<<p->name<<" ";
        p=p->pre;
    }
    cout<<endl;
}
int main()
{
    node *head=(node*)malloc(sizeof(node));
    node *tail=creat_list(&head);
    system("cls");
    cout<<"Forward Print :"<<endl;
    print_list_forward(head);
    cout<<"Backward Print :"<<endl;
    print_list_backword(tail);
    //system("pause");  it is working
}
