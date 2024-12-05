#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin>>n>>q;
    vector<int> d(n,0);
    for (int i=0;i<n;i++)
    { int c; cin>>c; d[i]=c;}
    for (int i=0; i<n; i++)
    {int t; cin>>t; d[i]=d[i]-t;}
    sort(d.begin(),d.end());
    for (int i=0; i<q; i++)
    {
        int v, s;
        cin>>v>>s;
        auto ptr=upper_bound(d.begin(),d.end(),s);
        
        
            if (d.end()-ptr>=v) {cout<<"YES"<<endl;}
            else {cout<<"NO"<<endl;}
            
        

    }
    
    return(0);
}