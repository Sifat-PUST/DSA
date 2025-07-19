#include<bits/stdc++.h>
using namespace std;
int n=0;
typedef struct node
{
    int data;
    node *link;
}node;
void print(node *head)
{
    system("cls");
    if(head==NULL)
        cout<<"Current List is Empty.."<<endl<<endl;
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
int count_node(node*head)
{
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->link;
    }
    return c;
}
void link_list(node**temp,node*tail,int value)
{
    tail->data=value;
    tail->link=NULL;
    (*temp)->link=tail;
    *temp=tail;
}
void add_at_end(node**head,node**temp)
{
    int value;
    cout<<"Enter Value :";
    cin>>value;
    if(n==0)
    {
        (*head)->data=value;
        (*head)->link=NULL;
        n++;
    }
    else
    {
        node *tail=new node;
        link_list(temp,tail,value);
    }
}
void add_at_begin(node**head,node **temp)
{
    if(n==0)
    {
        add_at_end(head,temp);
    }
    else
    {
        int value;
        cout<<"Element :";
        cin>>value;
        node *ptr=new node;
        ptr->data=value;
        ptr->link=(*head);
        *head=ptr;
    }
}
void add_at_required_pos(node**head,node**temp)
{
    int pos,value;
    cout<<"Position :";
    cin>>pos;
    if(pos==1)
        add_at_begin(head,temp);
    else if(pos==count_node(*head)+1)
        add_at_end(head,temp);
    else
    {
        cout<<"Element :";
        cin>>value;
        node *p=*head;
        node *ptr=new node;
        ptr->data=value;
        ptr->link=NULL;
        for(int i=1;i<pos-1;i++)
        {
            p=p->link;
        }
        ptr->link=p->link;
        p->link=ptr;
    }
}
void insrtion_operation(node**head,node**temp)
{
    int choice;
    cout<<"Click 1 : Insert at End."<<endl;
    cout<<"Click 2 : Insert at Begin."<<endl;
    cout<<"Click 3 : Insert at Required Position."<<endl;
    cout<<"Click 0 : Go Previous Option."<<endl;
    cout<<endl;
    cout<<"Choice: ";
    cin>>choice;
    if(choice==1)
    {
        add_at_end(head,temp);
        print(*head);
    }
    else if(choice==2)
    {
        add_at_begin(head,temp);
        print(*head);
    }
    else if(choice==3)
    {
        add_at_required_pos(head,temp);
        print(*head);
    }
    else if(choice==0)
    {
        exit(0);
    }
}
void del_at_first(node**p)
{
    node *temp=*p;
    *p=temp->link;
    free(temp);
}
void del_at_end(node**head,node**temp)
{
    node *p=*head;
    while(p->link->link!=NULL)
    {
        p=p->link;
    }
    free(p->link);
    p->link=NULL;
    *temp=p;
}
void del_at_required_pos(node**head,node**tail)
{
    int position;
    cout<<"Enter Position :";
    cin>>position;
    node *temp,*ptr=*head;
    if(position==1)
        del_at_first(head);
    else if(position==count_node(*head)+1)
        del_at_end(head,tail);
    else
    {
        for(int i=1;i<position-1;i++)
        {
            ptr=ptr->link;
        }
        temp=ptr->link;
        ptr->link=ptr->link->link;
        free(temp);
    }
}
void Deletion_operation(node**head,node**temp)
{
    if(n==0)
    {
        cout<<"Currently No List isn't Created.Please Create a List"<<endl;
        insrtion_operation(head,temp);
    }
    else
    {
        int choice;
        cout<<"Click 1 : Delete at End."<<endl;
        cout<<"Click 2 : Delete at Begin."<<endl;
        cout<<"Click 3 : Delete at Required Position."<<endl;
        cout<<"Click 0 : Go Previous Option."<<endl;
        cout<<endl;
        cout<<"Choice: ";
        cin>>choice;
        if(choice==1)
        {
            del_at_end(head,temp);
            print(*head);
        }
        else if(choice==2)
        {
            del_at_first(head);
            print(*head);
        }
        else if(choice==3)
        {
            del_at_required_pos(head,temp);
            print(*head);
        }
        else if(choice==0)
        {
            exit(0);
        }
    }
}
void main_operation(node **head,node**temp)
{
    if(*head==NULL)
        n--;
    else;
    int choice;
    cout<<"Click 1 : To Insert Data."<<endl;
    cout<<"Click 2 : To Delete Data."<<endl;
    cout<<"Click 0 : To Exit Program."<<endl;
    cout<<endl;
    cout<<"Choice: ";
    cin>>choice;
    if(choice==1)
    {
        insrtion_operation(head,temp);
    }
    else if(choice==2)
        Deletion_operation(head,temp);
    else
        exit(0);
}
int main()
{
    node* head=NULL;
    //print(head);
    head=new node;
    node *temp=head;
    while(1)
    {
        main_operation(&head,&temp);
    }
}
