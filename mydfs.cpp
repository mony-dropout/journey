#include <bits/stdc++.h>
using namespace std;
vector<string> f;
vector<vector<int>> nei;
void dfs(int v)
{
    int i=1;
    for (int u:nei[v])
    {
        if (f[u]=="0")
        {
            f[u]=f[v]+to_string(i);
            i++;
            dfs(u);
        }
    }
}
int main()
{
int n; cin>>n;
int edges; cin>>edges;
vector<pair<int,int>> e(edges);
for (int i=0;i<edges;i++)
{
    int x,y; cin>>x>>y;
    e[i].first=x;
    e[i].second=y;
}

nei.resize(n+1);
for (int i=0;i<edges;i++)
{   int f,s;
    f=e[i].first; s=e[i].second;
    nei[f].push_back(s);
    nei[s].push_back(f);
}
/*for (int i=1;i<=n;i++)
{
    int m; cin>>m; //number of neighbours of i
    for (int j=0;j<m;j++)
    {
        int x; cin>>x;
        nei[i].push_back(x);
    }
}*/
for (int i=1;i<=n;i++)
{
    sort(nei[i].begin(),nei[i].end());
}
f.resize(n+1);
for (int i=0;i<=n+1;i++)
{
    f[i]="0";
}
f[1]="1";

dfs(1);
for (int i=1;i<=n;i++)
{
    cout<<i<<" : "<<f[i]<<endl;
}
return(0);
}



