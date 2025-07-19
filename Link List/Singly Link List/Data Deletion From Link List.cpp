#include<bits/stdc++.h>
using namespace std;
typedef struct object
{
    int  value;
    object *link;
}object;
void create_list(object *head)
{
    int value;
    int size;
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
    system("cls");
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
void Option()
{
    cout<<"TAKE ACTIONs :"<<endl;
    cout<<"\tClick:1.Delete Node at First Position."<<endl;
    cout<<"\tClick:2.Delete Node at End Position."<<endl;
    cout<<"\tClick:3.Delete Node at Required Position."<<endl;
    cout<<"\tClick:4.Delete Entire Node ."<<endl;
    cout<<"\tClick:0.Exit The Program."<<endl;
}
void del_first(object**p)
{
    object *temp=*p;
    *p=temp->link;
    free(temp);
}
void del_end(object *p)
{
    //object *ptr;
    while(p->link->link!=NULL)
    {
        p=p->link;
    }
    free(p->link);
    p->link=NULL;
}
void del_require_pos(object**p)
{
    int position;
    cout<<"Enter Position :";
    cin>>position;
    object *temp,*ptr=*p;
    if(position==1)
        del_first(p);
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
void del_all(object **p)
{
    object *temp=*p;
    while(temp!=NULL)
    {
        temp=temp->link;
        free(*p);
        *p=temp;
    }
}
void operation(object **ptr,int choice)
{
    //here **p is used for ,p is a address and *p also return a address from main function.

    if(choice==1)
        del_first(ptr);
    else if(choice==2)
        del_end(*ptr);
    else if(choice==3)
        del_require_pos(ptr);
    else if(choice==4)
        del_all(ptr);
    else if(choice==0)
        exit(0);
}
int main()
{
    int choice;
    object* head=(object*)malloc(sizeof(object));
    create_list(head) ;
    while(1)
    {
        print(head);
        Option();
        cout<<" Click 0 to 4 :";
        cin>>choice;
        operation(&head,choice);
    }
}
