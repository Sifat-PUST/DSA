#include<bits/stdc++.h>
using namespace std;
typedef struct object
{
    int value;
    object *link;
}object;
void create_list(object *head)
{
    int value,size;
    cout<<"Enter List size :";
    cin>>size;
    object* List,*node;
    node=head;
    cout<<"Enter Elements :"<<endl;
    cin>>value;
    head->value=value;
    head->link=NULL;
    for(int i=0;i<size-1;i++)
    {
        cin>>value;
        List=(object*)malloc(sizeof(object));
        List->value=value;
        List->link=NULL;
        node->link=List;
        node=node->link;
    }
}
void print(object *p)
{
    //system("cls");
    cout<<"LIST is :";
    if(p==NULL)
        cout<<" Empty."<<endl;
    else
    {
        while(p!=NULL)
        {
            cout<<p->value<<" ";
            p=p->link;
        }
        cout<<endl;
    }
}
void reverse_list(object**p)
{
    object *previous=NULL,*next;
    while(*p!=NULL)
    {
        next=(*p)->link;
        (*p)->link=previous;
        previous=(*p);
        (*p)=next;
    }
    *p=previous;
}
int main()
{
    object *head=(object*)malloc(sizeof(object));
    create_list(head);
    system("cls");
    cout<<"Before Reverse List: ";
    print(head);
    reverse_list(&head);
    cout<<"After Reverse List: ";
    print(head);
}
