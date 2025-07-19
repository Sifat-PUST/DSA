#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *link;
}node;
void print(node* head)
{
    system("cls");
    if(head==NULL)
        cout<<"Current List Is Empty..."<<endl;
    else
    {
        while(head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->link;
        }
        cout<<endl;
    }
}
node* push_last(node*head , node*tail , node*temp , node*temp2)
{
    int value;
    cout<<"Element :";
    cin>>value;
    tail->data=value;
    tail->link=NULL;
    temp->link=temp2;
    print(head);
    temp=tail;
    return temp;
}
int main()
{
    node *head=new node;
    node *temp=head;
    node *tail=head;
    node *temp2=NULL;
    while(1)
    {
        temp=push_last(head,tail,temp,temp2);
        tail=new node;
        temp2=tail;
    }
}
