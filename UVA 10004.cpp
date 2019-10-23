#include<bits/stdc++.h>
using namespace std;

vector<int>adj[205];
bool visited[205];
int level[205];
bool flag;

void BFS(int src)
{
    memset(level,-1,sizeof(level));
    queue<int>que;

    que.push(src);
    visited[src]=true;

    while(!que.empty())
    {
        int parent = que.front();
        que.pop();

        int sz = adj[parent].size();
        for(int i=0;i<sz;i++)
        {
            int child = adj[parent][i];
            if(level[child]==-1) /// check level -1 for unvisited.
            {
                level[child]=(level[parent]+1)%2;
                que.push(child);
            }

            if(level[child]==level[parent])
            {
                flag = false;
                return ;
            }
        }
    }
}

int main()
{
//    freopen("in.txt","r",stdin);
    int edge,vrtx;
    while(cin>>vrtx)
    {
        flag = true;
        if(vrtx==0)
            break;
        cin>>edge;
        for(int i=0;i<edge;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        BFS(0);
        if(flag)
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;

        for(int i=0;i<vrtx;i++)
            adj[i].clear();
    }
    return 0;
}
