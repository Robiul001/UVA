#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f;
    cin>>n;
    while(n--)
    {
        long long int a,b,c,ans=0;
        cin>>f;
        for(int i=0;i<f;i++)
        {
            cin>>a>>b>>c;
            ans+=(a*c);
        }
        cout<<ans<<endl;
    }
    return 0;
}
