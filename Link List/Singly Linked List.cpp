#include<bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    Node *link;
}Node;
void print (Node *head)
{
    system("cls");
    cout<<"List :";
    if(head==NULL)
        cout<<"Empty"<<endl;
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
void pushFirstNode(Node**head,Node**tail)
{
    *head=new Node;
    int element;
    cout<<"Enter Element :";
    cin>>element;
    (*head)->data=element;
    (*head)->link=NULL;
    *tail=*head;
}
void pushBack(Node**head,Node**tail)
{
    if(*head==NULL)
        pushFirstNode(head,tail);
    else
    {
        Node*temp=new Node;
        int element;
        cout<<"Enter Element :";
        cin>>element;
        temp->data=element;
        temp->link=NULL;
        (*tail)->link=temp;
        *tail=temp;
    }
}
void pushBegin(Node**head,Node**tail)
{
    if(*head==NULL)
        pushFirstNode(head,tail);
    else
    {
        Node*temp=new Node;
        int element;
        cout<<"Enter Element :";
        cin>>element;
        temp->data=element;
        temp->link=*head;
        *head=temp;
    }
}
void pushRandom(Node**head,Node**tail)
{
    int pos;
    cout<<"Position To Insert Node :";
    cin>>pos;
    if(pos==1)
        pushBegin(head,tail);
    else
    {
        Node*temp=new Node;
        int element;
        cout<<"Enter Element :";
        cin>>element;

        Node *p=*head;
        for(int i=1;i<pos-1;i++)
        {
            p=p->link;
        }
        temp->data=element;
        temp->link=p->link;
        p->link=temp;
    }
}
void Menu()
{
    cout<<"Click 1:To Push Back."<<endl;
    cout<<"Click 2:To Push First."<<endl;
    cout<<"Click 3:To Push at Required Position."<<endl;
    cout<<"Click 4:To Pop Back."<<endl;
    cout<<"Click 5:To Pop First."<<endl;
    cout<<"Click 6:To Pop at Required Position."<<endl;
    cout<<"Click 0:To Exit Pogram."<<endl;
}
void Operation(Node**head,Node**tail)
{
    int choice;
    cout<<"\tChoice :";
    cin>>choice;
    switch(choice)
    {
    case 1:
        pushBack(head,tail);
        break;
    case 2:
        pushBegin(head,tail);
        break;
    case 3:
        pushRandom(head,tail);
    default:
        return;
    }
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {
        print(head);
        Menu();
        Operation(&head,&tail);
    }

}
