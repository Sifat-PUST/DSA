#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *left,*right;
}node;
void print(node *root)
{
    if(root==NULL)
        return;
     cout<<root->data<<" ";
     print(root->left);
     print(root->right);
}
void Link(node *root,node *leaf)
{
    do
    {
        if(root->data>leaf->data)
        {
            if(root->left==NULL)
            {
                root->left=leaf;
                break;
            }
            else
            {
                root=root->left;
            }
        }
        else
        {
            if(root->right==NULL)
            {
                root->right=leaf;
                break;
            }
            else
                root=root->right;
        }
    }while(root!=NULL);
}
void create_tree(node **root)
{
    int value,node_no;
    cout<<"How many Node.? :";
    cin>>node_no;
    cout<<"Enter Node :";
    if(*root==NULL)
    {
        *root=new node;
        cin>>value;
        (*root)->left=NULL;
        (*root)->data=value;
        (*root)->right=NULL;
    }
        node *leaf=NULL;
        for(int i=1;i<node_no;i++)
        {
            leaf=new node;
            cin>>value;
            leaf->left=NULL;
            leaf->data=value;
            leaf->right=NULL;
            Link(*root,leaf);
        }
}
int main()
{
    node *root=NULL;
    create_tree(&root);
    print(root);
}
