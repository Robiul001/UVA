#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    string str1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string str2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";

    map<char,char>MS;

    for(int i=0;i<str1.size();i++)
        MS[str1[i]] = str2[i];

    string str;
    while(cin>>str)
    {
        bool palin=1,mirror=1;
        int n=str.size();
        for(int i=0;i<=(n/2);i++)
        {
            if(str[i]!=str[n-1-i])
                palin=false;
            if(str[n-1-i]!=MS[str[i]])
                mirror=false;
        }
        if(palin ==1 && mirror ==0)
            cout<<str<<" -- is a regular palindrome."<<endl<<endl;
        else if(palin ==0 && mirror ==1)
            cout<<str<<" -- is a mirrored string."<<endl<<endl;
        else if(palin ==1 && mirror ==1)
            cout<<str<<" -- is a mirrored palindrome."<<endl<<endl;
        else
            cout<<str<<" -- is not a palindrome."<<endl<<endl;
    }
    return 0;
}
