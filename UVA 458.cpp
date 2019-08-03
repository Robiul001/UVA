#include<bits/stdc++.h>
using namespace std;
int main()
{
//    char ch;
//    while(scanf("%c",&ch)!=EOF)
//    {
//        if(ch=='\n')
//            printf("\n");
//        else
//            printf("%c",(ch-7));
//    }

    string str;
    while(cin>>str)
    {
        int sz=str.size();
        for(int i=0;i<sz;i++)
        {
            cout<<char(str[i]-7);
        }
        cout<<endl;
    }
    return 0;
}
