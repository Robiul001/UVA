#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
    char str[100005];
    while(gets(str))
    {
        int cnt=0;
        int check=0;
        int n=strlen(str);
        for(int i=0;i<n;i++)
        {
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            {
                check=1;
            }
            else
            {
                //cout<<check<<" robi"<<endl;
                cnt+=check;
                check=0;
            }
        }
        cnt+=check;
        cout<<cnt<<endl;
    }
    return 0;
}
