#include<bits/stdc++.h>
using namespace std;
typedef struct object
{
    int mark;
    object *prev,*next;
}obj;

obj *create_List(obj**head)
{
    int node_no,weight;
    cout<<"How many Node are There: ";
    cin>>node_no;
    obj *ptr;//=*head;
    obj*tail;//=*head;
    //obj*tail=NULL;
    cout<<"Enter Element:"<<endl;
    cin>>weight;
    (*head)->prev=NULL;
    (*head)->mark=weight;
    (*head)->next=NULL;
    ptr=*head;
    tail=*head;
    for(int i=0;i<node_no-1;i++)
    {
        cin>>weight;
        tail=(obj*)malloc(sizeof(obj));
        tail->prev=NULL;
        tail->mark=weight;
        tail->next=NULL;
        ptr->next=tail;
        tail->prev=ptr;
        ptr=tail;
    }
    return tail;
}
void print_forward(obj *head)
{
    while(head!=NULL)
    {
        cout<<head->mark<<"  ";
        head=head->next;
    }
    cout<<endl;
}
void print_backward(obj *tail)
{
    while(tail!=NULL)
    {
        cout<<tail->mark<<"  ";
        tail=tail->prev;
    }
    cout<<endl;
}
void print(obj*head,obj*tail)
{
    if(head==NULL||tail==NULL)
        cout<<"List Is Empty....."<<endl;
    else
    {
        int choice;
        cout<<"Click 1: Print Forward."<<endl;
        cout<<"Click 2: Print Backward."<<endl;
        cout<<"Click 3: Print Forward & Backward."<<endl;
        cout<<"Choice :";
        cin>>choice;
        system("cls");
        if(choice==1)
            print_forward(head);
        else if(choice==2)
            print_backward(tail);
        else if(choice==3)
        {
            print_forward(head);
            print_backward(tail);
        }
    }
}
void option()
{
    cout<<"Click 1: Insertion at First."<<endl;
    cout<<"Click 2: Insertion at End."<<endl;
    cout<<"Click 3: Insertion at Required Position."<<endl;
    cout<<"Click 4: Deletion at First."<<endl;
    cout<<"Click 5: Deletion at Last."<<endl;
    cout<<"Click 6: Deletion at Required Position."<<endl;
    cout<<"Click 0: Exit Program."<<endl;
    cout<<"Choice :";
}
void add_at_first(obj**head)
{
    int weight;
    cout<<"Enter Element :";
    cin>>weight;
    obj *ptr=(obj*)malloc(sizeof(obj));
    ptr->prev=NULL;
    ptr->mark=weight;
    ptr->next=*head;
    (*head)->prev=ptr;
    *head=ptr;
}
void add_at_end(obj**tail)
{
    int weight;
    cout<<"Enter Element :";
    cin>>weight;
    obj *ptr=(obj*)malloc(sizeof(obj));
    ptr->prev=NULL;
    ptr->mark=weight;
    ptr->next=NULL;
    (*tail)->next=ptr;
    ptr->prev=*tail;
    *tail=ptr;
}
void add_at_position(obj **p)
{
    obj *head=*p;
    int position;
    cout<<"Enter Position :";
    cin>>position;
    if(position==1)
        add_at_first(p);
    else
    {
        int weight;
        cout<<"Enter Element :";
        cin>>weight;
        obj *ptr=(obj*)malloc(sizeof(obj));
        ptr->prev=NULL;
        ptr->mark=weight;
        ptr->next=NULL;
        for(int i=1;i<position-1;i++)
        {
            head=head->next;
        }
        ptr->prev=head;
        ptr->next=head->next;
        //head->next->prev=ptr; // && ptr->next->prev=ptr; are same
        head->next=ptr;
        ptr->next->prev=ptr;
    }
}
void del_at_first(obj**head)
{
    obj* p=*head;
    *head=p->next;
    if(*head!=NULL)
        (*head)->prev=NULL;
    free(p);
}
void del_at_end(obj**tail)
{
    obj *p=*tail;
    if(p->prev!=NULL)
        p->prev->next=NULL;
    *tail=p->prev;
    free(p);
}
void del_at_position(obj**head)
{
    int pos;
    cout<<"Enter Position :";
    cin>>pos;
    if(pos==1)
        del_at_first(head);
    else
    {
        obj *p=*head;
        for(int i=1;i<pos;i++)
        {
            p=p->next;
        }
        p->next->prev=p->prev;
        p->prev->next=p->next;
        free(p);
    }
}
void Operation(obj**head,obj**tail)
{
    int choice;
    cout<<"Choice :";
    cin>>choice;
    system("cls");
    if(choice==1)
        add_at_first(head);
    else if(choice==2)
        add_at_end(tail);
    else if(choice==3)
        add_at_position(head);
    else if(choice==4)
        del_at_first(head);
    else if(choice==5)
        del_at_end(tail);
    else if(choice==6)
        del_at_position(head);
    else if(choice==0)
        exit(0);
}
int main()
{
     obj *head=(obj*)malloc(sizeof(obj));
     obj *tail=create_List(&head);
     while(1)
     {
         print(head,tail);
         option();
         Operation(&head,&tail);
     }
}
