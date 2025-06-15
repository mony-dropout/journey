#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
int cc(vi v, int x)
{
    int req=0;
    
    auto ptr=v.begin();
    while (ptr!=v.end())
    {
        req+=1;
        ptr=upper_bound(v.begin(),v.end(),v[ptr-v.begin()]+x);
    }
    return req;
    //works :)
    //time=n/x log n

}
int main()
{
    int n; cin>>n;
    vector<bool> app(n+1,false);
    vii v(n+1); //v[i] contains list of indices where i appears
    for (int i=1;i<=n;i++)
    {
        int x; cin>>x;
        v[x].push_back(i);
        app[x]=true;
    }
    vector<int> all;
    for (int x=1;x<=n;x++)
    {
        if (app[x]) all.push_back(x);
    }
    for (int x=1;x<=n;x++)
    {   int sum=0;
        for (int t:all)
        {
            sum+=cc(v[t],x);
        }
        cout<<sum;
        if (x<n) {cout<<endl;}
    }
    return(0);

    //lb is first elem >=x; ub is first element >x;


}