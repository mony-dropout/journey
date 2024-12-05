#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    int q;
    cin>>q;
    vector<int> c(n,0);
    for (int i=0; i<n; i++)
    {
        int l;
        cin>>l;
        c[i]=l;
    }
    vector <int> t(n,0);
    for (int j=0;j<n;j++)
    {
        int w;
        cin>>w;
        t[j]=w;
    }
    vector<int> d(n,0);
    for (int i=0;i<n;i++)
    {
        d[i]=c[i]-t[i];
    }
    for (int i=0;i<q;i++)
    {
        int v,s;
        cin>>v>>s;
        int x=0;
        for(int i:d) {if (s<i) {x++;}}
        if (x>=v) {cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;};
    }
    return(0);
}