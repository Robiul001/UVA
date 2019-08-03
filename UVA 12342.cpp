#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int T,case_no=1;
    cin>>T;
    while(T--)
    {
        long long int k,tax=0;
        cin>>k;
        k-=180000;
        if(k>0)
        {
            tax += k*10;
            k-=300000;
            if(k>0)
            {
                tax += k*5;
                k-=400000;
                if(k>0)
                {
                    tax += k*5;
                    k-=300000;
                    if(k>0)
                    {
                        tax += k*5;
                    }
                }
            }
        }

        if(tax%100)
            tax+=(100-(tax%100));

        tax/=100;
        if(tax<=2000.0 && tax>0)
        {
            cout<<"Case "<<case_no<<": "<<2000<<endl;
        }
        else
        {
            cout<<"Case "<<case_no<<": "<<tax<<endl;
        }
        case_no++;
    }
    return 0;
}
