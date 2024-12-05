#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    
    int n;
    ll m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int> t(n+2,0);
    //if (s[i]=='R'){t[i]=+1;}    // else if (s[i]=='L') {t[i]=-1;}
    if (s[n-1]=='R'){t[0]=+1;}    else if (s[n-1]=='L') {t[0]=-1;}
    if (s[0]=='R'){t[n+1]=+1;}     else if (s[0]=='L') {t[n+1]=-1;}
    for (int i=1; i<=n; i++) {if (s[i-1]=='R'){t[i]=+1;}     else if (s[i-1]=='L') {t[i]=-1;}}
    //t is working perfectly
    vector<int> c(n+1,0);
    c[0]=-90;
    for (int i=1;i<=n;i++)
    {
        c[i]=-1;
        if (t[i-1]==1) {c[i]=c[i]+1;}
        if (t[i+1]==-1) {c[i]=c[i]+1;}
    }
    
    vector<pair<int,ll>> a(n+1);
    a[0].first=0; a[0].second=0;
    long long original=0;
    for (int i=1;i<=n;i++){ll p; cin>>p; a[i].second=p; a[i].first=i; original+=p;}
    sort (a.begin()+1,a.end(),[=](const pair<int,ll>& x, const pair<int,ll>& y){return x.second<y.second;});
    vector<ll> b(n,0);
    for (int i=0;i<n;i++){b[i]=a[i+1].second;}
    auto ptr=upper_bound(b.begin(),b.end(),m);
    int k=ptr-b.begin();
    long long l=0;
    long long delta=0;
    for (int j=1; j<=k;j++)
    {
        long long delta=a[j].second-a[j-1].second;
        l=l+(count(c.begin(),c.end(),1))*delta;
        c[a[1].first+t[j]]--;
        

    }
    l+=(m-a[k].second)*count(c.begin(),c.end(),1);

    cout<<original-l;

    


    
    return(0);



}