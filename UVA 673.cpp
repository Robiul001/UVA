#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<char>character;
        int n;
        string str;
        cin>>str;
        n=str.size();
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(' || str[i]=='[')
                character.push(str[i]);
            else if(str[i]==')')
            {
                if(character.empty() || character.top()!='(')
                {
                    character.push('a');
                    break;
                }
                character.pop();
            }
            else if(str[i]==']')
            {
                if(character.empty() || character.top()!='[')
                {
                    character.push('a');
                    break;
                }
                character.pop();
            }
        }
        if(character.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
