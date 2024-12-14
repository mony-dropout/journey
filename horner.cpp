#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using ll=long long;
long long horner(vi p, int x)
{   int n=p.size()-1;
    ll ans=p[n];
    for (int i=n;i>0;i--)
    {
        ans=ans*x+p[i-1];
    }
    return ans;

}
int main()
{
    int n; cin>>n; //degree of poly
    vi p;
    for (int i=0;i<=n;i++)
    {
        int x; cin>>x;
        p.push_back(x); //this is interesting, which is faster, pushing back, or initilaising as zero and then assigning new vals, i guess pushing back cuz 
        //initialising presumably takes time
    }
    int x; cin>>x;
    ll t=horner(p,x);
    cout<<t;
    return(0);

}
//conrats, this works