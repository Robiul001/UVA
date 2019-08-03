#include<bits/stdc++.h>
using namespace std;

int Generator(int n)
{
    int start;
    if(n>100)
        start=n-100;
    else
        start=n/2;

    for(int i=start;i<=n;i++)
    {
        int j=i;
        int temp=i;
        while(j!=0)
        {
            temp+=(j%10);
            j/=10;
        }
        if(temp==n)
            return i;
    }
    return 0;
}


int main()
{
    int t,n,result;
    cin>>t;
    while(t--)
    {
        cin>>n;
        result = Generator(n);
        cout<<result<<endl;
    }
    return 0;
}
