#include<bits/stdc++.h>
using namespace std;

long long int H(long long int n)
{
    long long int res=0;
    int rrt = sqrt(n);
    for(int i=1;i<=rrt;++i)
    {
        res = res + ((n/i) + (n/i));
    }
    res = res - (rrt*rrt);
    return res;
}

int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    while(T --)
    {
       long long int n;
        cin>>n;
        long long int ans = H(n);
        cout<<ans<<endl;
    }
    return 0;
}
