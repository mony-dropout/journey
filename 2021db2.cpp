#include <bits/stdc++.h>
using namespace std;
int sign(int n){if (n>=0) return +1; else return -1;}
int main(){
    int n;cin>>n;
    vector<int> a(n+1);
    for (int i=0;i<n;i++)
    {int x; cin>>x; a[i]=x;}
    for (int i=0;i<n;i++)
    {
        int y; cin>>y; a[i]-=y;
    }
    a[n]=-1*sign(a[n-1]);
    int csign =sign(a[0]);
    int cmax=abs(a[0]);
    int ans=0;
    for (int i=0;i<n;i++)
    {
        if (sign(a[i+1])==sign(a[i])) {cmax=max(cmax,abs(a[i+1]));}
        else {ans+=cmax; csign=sign(a[i+1]); cmax=abs(a[i+1]);}
    }
    cout<<ans;
    return(0);

}