#include <bits/stdc++.h>
using namespace std;
using ii=pair<int,int>;
using vii=vector<pair<int,int>>;
using vi=vector<int>;
vector<vi> adj;
vector<bool> vted;
void dfs(int s)
{   if (vted[s]) {return;}
    vted[s]=true;
    for (auto x:adj[s])
    {dfs(x);}

}

int main()
{
int n; cin>>n;
int e; cin>>e;
adj.resize(n+1);
vted.resize(n+1,false);
//vector<vi> adj(n+1);
for (int i=0;i<e;i++)
{int x,y; cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}

dfs(1);
cout<<"connected componenet of 1"<<endl;

for (int i=1;i<=n;i++)
{if (vted[i]){cout<<i<<" ";} }

return(0);
}
