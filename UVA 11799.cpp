#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int n,c,mx=0;
        cin>>n;
        while(n--)
        {
            cin>>c;
            mx = max(mx,c);
        }
        cout<<"Case "<<i<<": "<<mx;
//        if(i!=T)
            cout<<endl;
    }
    return 0;
}
