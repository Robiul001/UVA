#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int cnt=0;
        int a=0;
        do{
            a=(a*10+1)%n;
            cnt++;
//            cout<<a<<" "<<cnt<<endl;
        }while(a!=0);
        cout<<cnt<<endl;
    }
    return 0;
}
