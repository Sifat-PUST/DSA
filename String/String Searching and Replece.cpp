#include<bits/stdc++.h>
using namespace std;

void stringCam(string str1,string str2,string str3)
{
    int l=0,len=str2.size();
    int c=0;
    bool check=false;
    int hold;
    for(int i=0;i<str1.size();i++)
    {
        if(str2[l]==str1[i])
        {
            c++;
            l++;
            if(c==len)
            {
                hold=i+1;
                check=true;
                break;
            }
            else;
            continue;
        }
        else
        {
            l=0;
            c=0;
        }
    }
    l=0;
    int len3=str3.size();
    int k=hold;
    if(check)
    {
        cout<<"Sub_String is match Whit main String and Index is :"<<hold-len<<endl;
        char *newstr = new char();
        for(int i=0;i<str1.size()+str3.size()-str2.size()+1;i++)
        {
            if(i<hold-len)
            {
                newstr[i]=str1[i];
            }
            else if(i>hold+len3-str2.size()-1)
            {
                newstr[i]=str1[k];
                k++;
            }
            else
            {
                newstr[i]=str3[l];
                l++;
            }

        }
        cout<<endl<<"New String is :"<<newstr<<endl;
    }
}
int main()
{
    int x=9/3*(3+1-1);
    cout<<x<<endl;
    string mainString,key,repString;
    cout<<"Enter String :";
    getline(cin,mainString);
    cout<<mainString<<endl;
    cout<<"Searching String key :";
    cin>>key;
    cout<<"Replace key String :";
    cin>>repString;
    system("cls");
    stringCam(mainString,key,repString);

}
