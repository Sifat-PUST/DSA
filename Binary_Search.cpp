#include<bits/stdc++.h>
using namespace std;
void print(int *a,int x)
{
    for(int i=0;i<x;i++)
        cout<<*(a+i)<<" ";
    cout<<endl;
}
int main()
{
    int size;
    cout<<"Enter Array Size :";
    cin>>size;
    int *arr=new int();
    for(int i=0;i<size;i++)
    {
        int n;
        cin>>n;
        *(arr+i)=n;
    }
    sort(arr,arr+size);
    cout<<"Sorted Array :";
    print(arr,size);
    int l=0;
    int r=size-1;
    int key;
    cout<<"Enter Searching Element :";
    cin>>key;
    while(l!=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==key)
        {
            cout<<"Position :"<<mid+1<<endl;
            break;
        }
        else if(arr[mid]>key)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
}
