#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
int main()
{
    int n; cin>>n;
    vi p(n+1,0);
    for (int i=1;i<=n;i++)
    {
        int x; cin>>x; p[i]=x;
    }
    vi f(n+1,0);
    f[1]=p[1];
    vii cuts(n+1);
    cuts[0]={};
    cuts[1]={1};
    for (int i=2;i<=n;i++)
    {
        int curmax=p[i];
        int curmaxindex=i;
        for (int j=1;j<i;j++)
        {   curmaxindex = ( (curmax>(p[i-j]+f[j])) ? curmaxindex : i-j);
            curmax=max(curmax, p[i-j]+f[j]);
        }

        f[i]=curmax;
        //first cut is at curmaxindex
        cuts[i]=cuts[i-curmaxindex];
        cuts[i].push_back(curmaxindex);
    }
    cout<<f(n)<<endl; //this is your optimal score
    for (int x:cuts[n])
    {cout<<x<<" ";} //this is your optimal cuts
    //what if you also wanna print out the exact cuts?

}