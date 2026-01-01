#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
int cc(vi v, int x) //given v and x, how many things required
{
    int req=0;
    if (x>v[v.size()-1]-v[0]+1) {return 1;}
    
    auto ptr=v.begin();
    while (ptr!=v.end())
    {
        req+=1;
        ptr=upper_bound(v.begin(),v.end(),v[ptr-v.begin()]+x);
    }
    return req;
    //works :)
    //time=n/x log n
    //actually time = n/x *log(no. of indices in group) but no. of inidices is obv just less than n

}
void allx(vi v, vi& X, int n) //this adds to X, X[0]=0 always, X[1],...X[n] are important
{
    for (int x=1;x<=n;x++)
    {
        X[x]+=cc(v,x); //time=\sum_(x=1->n) n/x log n ~ n*(logn)^2
    }
}
int main()
{
    int n; cin>>n;
    if (n<=5000)
    {
    vector<bool> app(n+1,false);
    vii v(n+1); //v[i] contains list of indices where i appears
    for (int i=1;i<=n;i++) //O(n)
    {
        int x; cin>>x;
        v[x].push_back(i);
        app[x]=true;
    }
    vector<int> all;
    for (int x=1;x<=n;x++)
    {
        if (app[x]) all.push_back(x); //all is every thing that occured in string
    }
    //say k indices apper in the string.
    vi X(n+1,0);
    for (int t:all)
    {
        allx(v[t],X,n); //n*log(n)^2 for each k, so k*n*(logn)^2
    }
    for (int i=1;i<=n;i++)
    {
        cout<<X[i];
        if (i<n) {cout<<endl;}
    }   
    }
    else
    {
    vii v(11);
    for (int i=1;i<=n;i++) //O(n)
    {
        int x; cin>>x;
        v[x].push_back(i);
    }
    vi X(n+1,0);
    for (int t=1;t<=10;t++)
    {
        allx(v[t],X,n); //n*log(n)^2 for each k, so k*n*(logn)^2
    }
    for (int i=1;i<=n;i++)
    {
        cout<<X[i];
        if (i<n) {cout<<endl;}
    }  

    }
    return(0);

    //lb is first elem >=x; ub is first element >x;


}