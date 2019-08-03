#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,B,H,W;
    while(cin>>N>>B>>H>>W)
    {
        int p,arr[15],mn=2000005;
        while(H--)
        {
            cin>>p;
            for(int i=0;i<W;i++)
                cin>>arr[i];
            sort(arr,arr+W);
            if(arr[0]!=0 && (N*p)<=B)
                mn = min(mn,(N*p));
        }
        if(mn==2000005)
            cout<<"stay home"<<endl;
        else
            cout<<mn<<endl;
    }
    return 0;
}
