#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    point *ptr;
};
void print(struct point *p)
{
    cout<<p->x<<"   "<<p->ptr<<endl;
}
int main()
{
    int n;
    struct point *head=(struct point *) malloc(sizeof(struct point));
    point *main;
    cin>>n;
    head->x=n;
    head->ptr=NULL;

    /*main->x=10;
    main->ptr=NULL;
    head->ptr=main;*/
    struct point *q=head;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        main=(struct point *) malloc(sizeof(struct point));
        main->x=n;
        main->ptr=NULL;
        q->ptr=main;
        q=q->ptr;
    }
    print(head);
    struct point *p=head;
    cout<<"Link List  :"<<endl;
    //for(int i=0;i<6;i++)
    while(p!=NULL)
    {
        if(head==NULL)
            cout<<"List is empty"<<endl;
        else
        {
            cout<<p->x<<"  ";
            p=p->ptr;
        }
    }

}
