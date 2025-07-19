#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
typedef struct node
{
    int data;
    node *link;
}node;
int count_node(node*head)
{
    int n=0;
    while(head!=NULL)
    {
        head=head->link;
        n++;
    }
    return n;
}
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
void Push_Begin(node**head,node**tail)
{
    int value;
    cout<<"Weight :";
    cin>>value;
    if(*head==NULL)
    {
        *head=new node;
        (*head)->data=value;
        (*head)->link=NULL;
        *tail=*head;
    }
    else
    {
        node *ptr=new node;
        ptr->data=value;
        ptr->link=*head;
        *head=ptr;
    }

}
void Push_Back(node**head,node**tail)
{
    int value;
    if(*head==NULL)
        Push_Begin(head,tail);

    else
    {
        cout<<"Weight :";
        cin>>value;
        node *ptr=new node;
        ptr->data=value;
        ptr->link=NULL;
        (*tail)->link=ptr;
        *tail=ptr;
    }
}
void Push_at_Position(node**head,node**tail)
{
    int position,value;
    cout<<"Position :";
    cin>>position;
    int n=count_node(*head)+1;
    if(position>n)
    {
        cout<<"Invalid Position is Inserted...."<<endl;
        cout<<"Position should be 1 to "<<n<<endl;
        Sleep(10000);
        return;
    }
    if(position==1)
        Push_Begin(head,tail);
    else
    {
        cout<<"Weight :";
        cin>>value;
        node*temp=*head;
        node *ptr=new node;
        ptr->data=value;
        ptr->link=NULL;
        for(int i=1;i<position-1;i++)
        {
            temp=temp->link;
        }
        if(temp==*tail)
            *tail=ptr;

        ptr->link=temp->link;
        temp->link=ptr;
    }
}
void Insertion(node**head,node**tail)
{
    int choice;
    cout<<"Click 1: Put at End."<<endl;
    cout<<"Click 2: Put at Begin."<<endl;
    cout<<"Click 3: Put at Position."<<endl;
    cout<<"Click 0: To Exit."<<endl;
    cout<<"\tSelect :";
    cin>>choice;
    if(choice==1)
        Push_Back(head,tail);
    else if(choice==2)
        Push_Begin(head,tail);
    else if(choice==3)
        Push_at_Position(head,tail);
    else if(choice==0)
        exit(0);
    else
    {
        cout<<"Invalid Choice...."<<endl;
        return;
    }
}
void Pop_Begin(node**head,node**tail)
{
    if(*head==NULL)
    {
        cout<<"No List is Found"<<endl<<"Please Insert List First"<<endl;
        Insertion(head,tail);
    }
    else
    {
        node*temp=*head;
        *head=temp->link;
        free(temp);
    }
}
void Pop_Back(node**head,node**tail)
{
    node *temp=*head;
    if(temp==NULL)
        Pop_Begin(head,tail);
    else if(temp->link==NULL)
        Pop_Begin(head,tail);

    else
    {
        while(temp->link->link!=NULL)
            temp=temp->link;

        free(temp->link);
        temp->link=NULL;
        *tail=temp;
    }
}
void Pop_at_Position(node**head,node**tail)
{
    if(*head==NULL)
        Pop_Begin(head,tail);
    else
    {
        int position;
        cout<<"Position :";
        cin>>position;
        int range=count_node(*head);
        if(position==1)
            Pop_Begin(head,tail);
        else if(position==range)
            Pop_Back(head,tail);
        else if(position<range)
        {
            node*temp=*head,*ptr;
            for(int i=1;i<position-1;i++)
                temp=temp->link;

            ptr=temp->link;
            temp->link=ptr->link;
            free(ptr);
        }
        else if(position>range)
        {
            cout<<"Invalid Position Inserted."<<endl;
            cout<<"\tPlease Click Range 1 to "<<range<<"."<<endl;
            Sleep(10000);
            return;
        }
    }
}
void Deletion(node**head,node**tail)
{
    int choice;
    cout<<"Click 1: Pop at End."<<endl;
    cout<<"Click 2: Pop at Begin."<<endl;
    cout<<"Click 3: Pop at Position."<<endl;
    cout<<"Click 0: To Exit."<<endl;
    cout<<"\tSelect :";
    cin>>choice;
    if(choice==1)
        Pop_Back(head,tail);
    else if(choice==2)
        Pop_Begin(head,tail);
    else if(choice==3)
        Pop_at_Position(head,tail);
    else if(choice==0)
        exit(0);
    else
    {
        cout<<"Invalid Choice."<<endl;
        Sleep(5000);
        return;
    }
}
void Swap(node*p,node*q)
{
    int x=p->data;
    p->data=q->data;
    q->data=x;
}
void Sort(node**head)
{
    node*temp1=*head;
    node*temp2=NULL;
    while(temp1!=NULL)
    {
        int min=temp1->data;
        node*ad=NULL;
        temp2=temp1->link;
        while(temp2!=NULL)
        {
            if(min>temp2->data)
            {
                min=temp2->data;
                ad=temp2;
            }
            else;
            temp2=temp2->link;
        }
        if(ad!=NULL)
            Swap(temp1,ad);

        else;
        temp1=temp1->link;
    }
}
void menu(node**head,node**tail)
{
    int choice;
    cout<<"Click 1: To Insert."<<endl;
    cout<<"Click 2: To Delete."<<endl;
    cout<<"Click 3: To Sort."<<endl;
    cout<<"Click 0: To Exit."<<endl;
    cout<<"\tSelect :";
    cin>>choice;
    if(choice==1)
        Insertion(head,tail);
    else if(choice==2)
        Deletion(head,tail);
    else if(choice==3)
        Sort(head);
    else if(choice==0)
        exit(0);
    else
    {
        cout<<"Invalid Choice."<<endl;
        system("cls");
        Sleep(5000);
        return;
    }
}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    while(1)
    {
        print(head);
        menu(&head,&tail);
    }
}
