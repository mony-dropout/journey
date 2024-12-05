//first ever usaco problem
#include <bits/stdc++.h>
using namespace std;

int main(){
    #define int long long
    int n;
    cin>>n;
    /*vector<int> c;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        auto ptr=lower_bound(c.begin(),c.end(),x);
        c.insert(ptr, x);
    }
    */
   vector<int> c(n,0);
   for (int i=0; i<n;i++) {
    int x;
    cin>>x;
    c[i]=x;
   }
   sort(c.begin(),c.end());
    long long m=0;
    int t=0;

    for (int i=0;i<n;i++)
    {
        if ((n-i)*c[i]>m) {m=(n-i)*c[i]; t=c[i];}
    }
    cout<<m<<' '<<t;
    return(0);
    


}