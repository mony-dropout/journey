#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vector<int>>;
vi rem0(vi v)
{   
    for (int i=v.size()-1;i>=0;i--)
    {
        if (v[i]==0) {v.erase(v.begin()+i);}
    }
    return v;
}
int main()
{
    int n; cin>>n;
    vi pp;
    for (int i=0;i<n;i++)
    {
        int x; cin>>x;
        pp.push_back(x);
    }
    vi v=rem0(pp);
    for( int x: v)
    {
        cout<<x<<" ";
    }
    v.erase(v.begin());
    v.erase(v.end()-1);
    for (int x:v)
    {cout<<x<<" ";}
    return(0);
}