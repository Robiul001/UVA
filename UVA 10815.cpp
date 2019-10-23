#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    string str;
    set<string>st;
    set<string>::iterator it;

    while(cin>>str)
    {
        string ss="";
        for(int i=0;i<str.size();i++)
        {
            char ch=tolower(str[i]);
            if(ch>='a' && ch<='z')
                ss+=ch;
            else if(ss!="")
            {
                st.insert(ss);
                ss="";
            }
        }
        if(ss!="")
        {
            st.insert(ss);
            ss="";
        }
    }
    for(it=st.begin();it!=st.end();it++)
        cout<<*it<<endl;
    return 0;
}
