#include<bits/stdc++.h>
using namespace std;
typedef struct obj
{
    float mark;
    obj *link;
}player;
void print(player*p)
{
    system("cls");
    cout<<"List Is :";
    while(p!=NULL)
    {
        cout<<p->mark<<" ";
        p=p->link;
    }
    cout<<endl;
}
void Option()
{
    cout<<"TAKE ACTIONs :"<<endl;
    cout<<"\tClick:1.Insert Node at End Position."<<endl;
    cout<<"\tClick:2.Insert Node at First Position."<<endl;
    cout<<"\tClick:3.Insert Node at Required Position."<<endl;
    cout<<"\tClick:0.Exit The Pogram."<<endl;
}
void in_end(player*p)
{
    int value;
    cout<<"Enter Mark :";
    cin>>value;
    player *new_node=(player*)malloc(sizeof(player));
    new_node->mark=value;
    new_node->link=NULL;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=new_node;
    //Time complexity== Big O(n).
}
void in_first(player**p)
{
    int value;
    cout<<"Enter Mark :";
    cin>>value;
    player *new_node=(player*)malloc(sizeof(player));
    new_node->mark=value;
    new_node->link=*p;
    *p=new_node;
    //Time complexity is Big O(1)
}
void in_require_pos(player**p)
{
    int value,position;
    cout<<"Enter Position  :";
    cin>>position;
    if(position==1)
    {
        in_first(p);
    }
    else
    {
        cout<<"Enter Mark :";
        cin>>value;
        player *ptr=*p;//*p return value of head from main() function
        player *new_node=(player*)malloc(sizeof(player));
        new_node->mark=value;
        new_node->link=NULL;
        for(int i=1;i<position-1;i++)
        {
            ptr=ptr->link;
        }
        new_node->link=ptr->link;
        ptr->link=new_node;
    }

    //Time complexity is Big O(n).
}
void operation(player **ptr,int choice)
{
    //here **p is used for ,p is a address and *p also return a address from main function.
    if(choice==1)
    {
        in_end(*ptr);
    }
    else if(choice==2)
    {
        in_first(ptr);
    }
    else if(choice==3)
    {
        in_require_pos(ptr);
    }
    else if(choice==0)
    {
        exit(0);
    }
}
int main()
{
    int value,node_no,choice;
    cout<<"How many Node..: ";
    cin>>node_no;
    player *head=(player *)malloc(sizeof(player));
    player *node,*tem_head;
    cout<<"Enter Elements :"<<endl;
    cin>>value;
    head->mark=value;
    head->link=NULL;
    tem_head=head;
    for(int i=0;i<node_no-1;i++)
    {
        cin>>value;
        node=(player*)malloc(sizeof(player));
        node->mark=value;
        node->link=NULL;
        tem_head->link=node;
        tem_head=tem_head->link;
    }

    print(head);
    while(1)
    {
        Option();
        cin>>choice;
        operation(&head,choice);
        //&head pass the address of head variable
        // while just head pass value of head.
        //here value of head is a Address which is allocated for a node by malloc function.
        print(head);
    }
}
