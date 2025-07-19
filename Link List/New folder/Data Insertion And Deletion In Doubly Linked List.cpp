#include<bits/stdc++.h>
using namespace std;
typedef struct object
{
    int mark;
    object *p,*n;
}goal;

goal *create_List(goal**start)
{
    int node_no,value;
    cout<<"How many Node are There: ";
    cin>>node_no;
    goal *ptr;
    goal*last;
    cout<<"Enter Element:"<<endl;
    cin>>value;
    (*start)->p=NULL;
    (*start)->mark=value;
    (*start)->n=NULL;
    ptr=*start;
    last=*start;
    for(int i=0;i<node_no-1;i++)
    {
        cin>>value;
        last=(goal*)malloc(sizeof(goal));
        last->p=NULL;
        last->mark=value;
        last->n=NULL;
        ptr->n=last;
        last->p=ptr;
        ptr=last;
    }
    return last;
}
void printF(goal *start)
{
    while(start!=NULL)
    {
        cout<<start->mark<<"  ";
        start=start->n;
    }
    cout<<endl;
}
void print(goal*start,goal*last)
{
    if(start==NULL||last==NULL)
        cout<<"NULL List"<<endl;
    else
    {
        system("cls");
        printF(start);
    }
}
void option()
{
    cout<<"Click 1: Add First."<<endl;
    cout<<"Click 2: Delete First."<<endl;
    cout<<"Click 0: Exit"<<endl;
    cout<<"Choice :";
}
void add(goal**start)
{
    int value;
    cout<<"Enter Element :";
    cin>>value;
    goal *ptr=(goal*)malloc(sizeof(goal));
    ptr->p=NULL;
    ptr->mark=value;
    ptr->n=*start;
    (*start)->p=ptr;
    *start=ptr;
}

void delF(goal**start)
{
    goal* p=*start;
    *start=p->n;
    if(*start!=NULL)
        (*start)->p=NULL;
    free(p);
}

void act(goal**start,goal**last)
{
    int choice;
    cout<<"Choice :";
    cin>>choice;
    system("cls");
    if(choice==1)
        add(start);
    else if(choice==2)
        delF(start);
    else if(choice==0)
        exit(0);
}
int main()
{
     goal *start=(goal*)malloc(sizeof(goal));
     goal *last=create_List(&start);
     while(1)
     {
         print(start,last);
         option();
         act(&start,&last);
     }
}
