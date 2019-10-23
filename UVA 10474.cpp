#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int n,q,test_case=0;
    int arr[100005];
    int query[100005];
    while(cin>>n>>q)
    {
        if(n==0 && q==0)
            break;
        memset(arr,-1,sizeof(arr));
        memset(query,-1,sizeof(query));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(i==0)
                query[arr[i]]=i+1;
            else if(arr[i]!=arr[i-1])
                query[arr[i]]=i+1;
            else{}
        }
        test_case++;
        cout<<"CASE# "<<test_case<<":"<<endl;
        for(int i=0;i<q;i++)
        {
            int tmp;
            cin>>tmp;
            if(query[tmp]!=-1)
                cout<<tmp<<" found at "<<query[tmp]<<endl;
            else
                cout<<tmp<<" not found"<<endl;
        }
    }
    return 0;
}
