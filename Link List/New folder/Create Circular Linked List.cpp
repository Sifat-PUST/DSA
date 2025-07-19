#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
typedef struct node
{
    int data;
    node *link;
}node;
void print(node*tail)
{
    system("cls");
    if(tail==NULL)
        cout<<"List is Empty."<<endl;
    else
    {
        node*ptr=tail->link;
        do
        {
            cout<<ptr->data<<" ";
            ptr=ptr->link;
        }while(ptr!=tail->link);
        cout<<endl;
    }
}
int count_element(node*tail)
{
    int n=0;
    if(tail!=NULL)
    {
        node*temp=tail->link;
        do
        {
            n++;
            temp=temp->link;
        }while(temp!=tail->link);
        return n;
    }
    else
        return n;
}
void Push_Back(node**tail)
{
    int value;
    cout<<"Weight :";
    cin>>value;
    if(*tail==NULL)
    {
        *tail=new node;
        (*tail)->data=value;
        (*tail)->link=*tail;
    }
    else
    {
        node *ptr=new node;
        ptr->data=value;
        ptr->link=(*tail)->link;
        (*tail)->link=ptr;
        *tail=ptr;
    }
}
void Push_Begin(node**tail)
{
    if(*tail==NULL)
        Push_Back(tail);
    else
    {
        int value;
        cout<<"Weight :";
        cin>>value;
        node*ptr=new node;
        ptr->data=value;
        ptr->link=(*tail)->link;
        (*tail)->link=ptr;
    }
}
void Push_at_Position(node**tail)
{
    int position,value;
    cout<<"Position :";
    cin>>position;
    int range=count_element(*tail);
    if(position==1)
        Push_Begin(tail);
    else if(position==range+1)
        Push_Back(tail);
    else if(position<=range)
    {
        cout<<"Weight :";
        cin>>value;
        node*temp=(*tail)->link;
        node*ptr=new node;
        for(int i=1;i<position-1;i++)
        {
            temp=temp->link;
        }
        ptr->data=value;
        ptr->link=temp->link;
        temp->link=ptr;
    }
    else
    {
        cout<<"Invalid Position is Inserted...."<<endl;
        cout<<"Position should be 1 to "<<range+1<<endl;
        Sleep(10000);
        return;
    }

}
void Insertion(node**tail)
{
    int choice;
    cout<<"Click 1: Push at End."<<endl;
    cout<<"Click 2: Push at Begin."<<endl;
    cout<<"Click 3: Push at Position."<<endl;
    cout<<"Click 0: To Exit."<<endl;
    cout<<"\tSelect :";
    cin>>choice;
    if(choice==1)
        Push_Back(tail);
    else if(choice==2)
        Push_Begin(tail);
    else if(choice==3)
        Push_at_Position(tail);
    else if(choice==0)
        exit(0);
    else
    {
        cout<<"Invalid Choice...."<<endl;
        return;
    }
}
void Pop_Back(node**tail)
{
    if(*tail==NULL)
    {
        cout<<"Pleas Insert List First"<<endl;
        Sleep(3000);
        Insertion(tail);
    }
    else if(*tail==(*tail)->link)
    {
        free(*tail);
        *tail=NULL;
    }
    else
    {
        node*temp=(*tail)->link;
        while(temp->link!=*tail)
        {
            temp=temp->link;
        }
        temp->link=(*tail)->link;
        free(*tail);
        *tail=NULL;
        *tail=temp;
    }
}
void Pop_Begin(node**tail)
{
    if(*tail==NULL)
    {
        Pop_Back(tail);
    }
    else if(*tail==(*tail)->link)
    {
        free(*tail);
        *tail=NULL;
    }
    else
    {
        node *temp=(*tail)->link;
        (*tail)->link=temp->link;
        free(temp);
    }
}
void Pop_at_Position(node**tail)
{
    int position;
    cout<<"Position :";
    cin>>position;
    int range=count_element(*tail);
    if(position==1)
        Pop_Begin(tail);
    else if(position==range)
        Pop_Back(tail);
    else if(position>1&&position<range)
    {
        node*temp=(*tail)->link;
        for(int i=1;i<position-1;i++)
            temp=temp->link;

        node* ptr=temp->link;
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
void Deletion(node**tail)
{
    int choice;
    cout<<"Click 1: Pop at End."<<endl;
    cout<<"Click 2: Pop at Begin."<<endl;
    cout<<"Click 3: Pop at Position."<<endl;
    cout<<"Click 0: To Exit."<<endl;
    cout<<"\tSelect :";
    cin>>choice;
    if(choice==1)
        Pop_Back(tail);
    else if(choice==2)
        Pop_Begin(tail);
    else if(choice==3)
        Pop_at_Position(tail);
    else if(choice==0)
        exit(0);
    else
    {
        system("cls");
        cout<<"Invalid Choice."<<endl;
        Sleep(5000);
        return;
    }
}
void menu(node**tail)
{
    int choice;
    cout<<"Click 1: To Insert."<<endl;
    cout<<"Click 2: To Delete."<<endl;
    cout<<"Click 0: To Exit."<<endl;
    cout<<"\tSelect :";
    cin>>choice;
    if(choice==1)
        Insertion(tail);
    else if(choice==2)
        Deletion(tail);
    else if(choice==0)
        exit(0);
    else
    {
        system("cls");
        cout<<"Invalid Choice."<<endl;
        Sleep(5000);
        return;
    }
}
int main()
{
    node *tail=NULL;
    while(1)
    {
        print(tail);
        menu(&tail);
    }
}
