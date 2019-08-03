#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        int sum = 0,j=0,n;
        n = str.size();
        for(int i=0;i<n;i++)
        {
            if(str[i]=='O')
                j++;
            else
                j=0;
            sum+=j;
        }
        cout<<sum<<endl;
    }
    return 0;
}
