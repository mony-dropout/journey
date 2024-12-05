#include <bits/stdc++.h>
using namespace std;
#include <fstream>
using vi=vector<int>;
int main(){
    ifstream cin("reststops.in");
    ofstream cout("reststops.out");
    int l,n,rf,rb;
    cin>>l>>n>>rf>>rb;
    vector<vi> v(n,vi(2)); //v[i][0] is x; v[i][1] is t
    for (int i=0;i<n;i++)
    {   int a,b;
        cin>>a>>b;
        v[i][0]=a;
        v[i][1]=b;
    }
    sort(v.begin(),v.end(),[=] (vi a, vi b) {return a[1]>b[1];});
    long long ans=0;
    
    for (int i=0;i<n;i++)
    {
        l-=v[i][0];
        if (l<0) {ans+=l*(rf-rb)*v[i][1]; break;}
        else {ans+=v[i][0]*v[i][1]*(rf-rb);}
    }
    cout<<ans;
    cin.close();
    cout.close();
    return(0);


}