#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void sv(vector<int> v, vector<ll> & a)
{
    int n=v.size();
    a[0]=static_cast<long long> (0);
    for (int i=1;i<=n;i++)
    {
        a[i]=a[i-1]+v[i-1];
    }
}
int main(){
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    vector<ll> a(n+1);
    for (int i=0;i<n;i++)
    {
        int x; cin>>x;
        v[i]=x;
    }
    sv(v,a);
    for (int t=0;t<q;t++)
    {
        int x, y;
        cin>>x>>y;
        cout<<a[y]-a[x-1];
        if (t!=q-1) {cout<<endl;}
    }
    return(0);
}