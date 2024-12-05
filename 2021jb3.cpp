#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i=0;i<n;i++) {int x; cin>>x; a[i]=x;}
    vector<int> b(n,0);
    for (int i=0;i<n;i++) {int x; cin>>x; b[i]=x;}
    long long ans=0;
    sort(b.begin(),b.end());
    for (int j=0;j<n;j++)
    {
        int x=count_if(a.begin(),a.end(),[=](int n){return n<=b[j];});    
        if (j==0) {ans=x; }
        else
        {
            ans=ans*(x-j);
        } 
        if (ans<=0) {break;}
        
    }
    cout<<ans;
    
}