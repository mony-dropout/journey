#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
int modulo(int a, int b)
{
    return (a%b+b)%b ;
}
using ll=long long;

ll bdm(vi v, int x, int M)
{   ll ans=0;
    for (int t: v)
    {
        int d=abs(t-x);
        ans+=min(d,M-d);
    }
    return ans;
}
int main()
{   int no_of_test; cin>>no_of_test;
    for (int qno=0;qno<no_of_test;qno++)
    {
    int n, m; cin>>n>>m;
    vi v;
    vi possx; //possible x
    for (int i=0;i<n;i++)
    {   int y; cin>>y;
        int ym=modulo(y,m);
        v.push_back(modulo(y,m));
        possx.push_back(ym);
        int l= m -(m%2);
        l/=2; //l is floor of m/2
        possx.push_back(modulo(ym-l,m));
        possx.push_back(modulo(ym-l-1,m));
        possx.push_back(modulo(ym+l,m));
        possx.push_back(modulo(ym+l+1,m));
    }
    ll ans=bdm(v,0,m);
    for (int possible:possx)
    {
        ans=min(ans,bdm(v,possible,m));
    }
    cout<<ans;
    if (qno!=no_of_test-1) {cout<<endl;}
    }
    return(0);


}