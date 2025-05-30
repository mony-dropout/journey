#include <bits/stdc++.h>
using namespace std;
using vi=vector<long long>;
long long maxi(long long a, long long b)
{
    if (a>=b) {return a;}
    else {return b;}
}
using ll=long long;

int main()
{   int T; cin>>T;
    for (int q=0;q<T;q++)
    {
    ll m; cin>>m; //this is 2n
    ll n=m/2;  
    vector<ll> a;
    a.push_back(0);
    ll total=0;
    for (ll i=1;i<=2*n;i++)
    {
        ll x; cin>>x; a.push_back(x);
        total+=x;
    }
    vi S(n,0);
    vi E(n,0);
    for (ll i=1;i<=n-1;i++)
    {
        S[i]=S[i-1]+a[i];
        E[i]=E[i-1]+a[2*n+1-i];
    }
    ll e=0;
    for (ll i=0;i<=n-1;i++)
    {
        e=maxi(e,S[i]+E[n-1-i]);
    }
    cout<<total-e<<" "<<e;
    if (q<T-1) {cout<<endl;}
    }



}