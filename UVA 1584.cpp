#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n = str.size();

        vector <string> vstr;
        vstr.push_back(str);

        for(int i=1;i<n;i++)
        {
            string first = str.substr(i);
            string second = str.substr(0,i);
            vstr.push_back(first+second);
        }
        sort(vstr.begin(),vstr.end());
        cout<<vstr[0]<<endl;
    }
    return 0;
}
