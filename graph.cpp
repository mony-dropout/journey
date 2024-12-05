#include <bits/stdc++.h>
using namespace std;
using ii=pair<int,int>;
using vii=vector<pair<int,int>>;
using vi=vector<int>;
vector<vi> adj;
vector<bool> vted;

/*void dfs(int s, vi& ccm)
{   
    if (vted[s]) {return;}
    ccm.push_back(s);
    vted[s]=true; 
    for (auto x:adj[s])
    {dfs(x,ccm);  }

}*/

void dfs(int s, vi& ccm)
{
    if (vted[s]) {return;}
    vted[s]=true; 
    ccm.push_back(s);
    for (auto tt:adj[s])
    {
        if (vted[tt]) {continue;}
        dfs(tt,ccm);
    }
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
vector<vi> cc(n+1);

for (int i=1;i<=n;i++)
{   if (vted[i]) {continue;}

    dfs(i,cc[i]);
}
//int count=0;

//cout<<count;
//for (int x:cc[2]) {cout<<x<<" ";}
//cout<<cc[2].size();
return(0);
}

