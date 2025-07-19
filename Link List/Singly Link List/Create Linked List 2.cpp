#include<bits/stdc++.h>
using namespace std;
typedef struct object
{
    int data;
    object *link;
}obj;
void create_list(obj*head)
{
    int no_of_list,value;
    cout<<"How many node :";
    cin>>no_of_list;
    cout<<"Enter data :"<<endl;
    cin>>value;
    head->data=value;
    head->link=NULL;
    obj *ptr,*temp=head;
    for(int i=1;i<no_of_list;i++)
    {
        cin>>value;
        ptr=(obj*)malloc(sizeof(obj));
        ptr->data=value;
        ptr->link=NULL;
        temp->link=ptr;
        temp=temp->link;
    }
}
void print(obj *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
    }
}
int main()
{
    obj *head=(obj*)malloc(sizeof(obj));
    create_list(head);
    system("cls");
    print(head);
}
