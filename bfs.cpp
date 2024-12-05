#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int inf=1e5;
int main()
{
    int n; cin>>n;
    int e; cin>>e;
    vector<vi> adj(n+1);
    for (int i=0;i<e;i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    /*queue<int> q;
    vector<bool> vted(n+1,false);
    vector<int> dist(n+1,inf);
    vector<int> p(n+1,-1);
    int s; cin>>s; //soruce vertex
    q.push(s);
    vted[s]=true;
    p[s]=-1;
    dist[s]=0;
    while(!q.empty())
    {
        int t=q.front(); q.pop();
    for (auto u:adj[t])
    {   
        if (vted[u]) {continue;}
        vted[u]=true;
        dist[u]=dist[t]+1;
        p[u]=t;
        q.push(u);
        
    }
    }*/
    queue <int> q;
    vector<bool> vted(n+1,false);
    vi dist(n+1,inf);
    vi p(n+1,-2);
    int s; cin>>s; //source vertex
    vted[s]=true;
    dist[s]=0;
    p[s]=-1;
    q.push(s); 
    while (!q.empty())
    {
        int t=q.front(); q.pop();
        for (auto u:adj[t])
        {
            if (vted[u]) {continue;}
            vted[u]=true;
            p[u]=t;
            dist[u]=dist[t]+1;
            q.push(u);
        }
    }


    cout<<"distance from x"<<endl;
for (int i=1;i<=n;i++)
{
    cout<<i<<" : "<<dist[i]<<endl;
    
    
}
for (int i=1;i<=n;i++)
{
    cout<<"path to "<<i<<" : ";
    int c=i;
    if (p[i]==-1) {cout<<"no path";}
    else{cout<<c<<" ";
    while (p[c]!=-1)
    {
        cout<<p[c]<<" "; c=p[c];
    }}
    cout<<endl;
    
}
return(0);
}








