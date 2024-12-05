#include <bits/stdc++.h>
using namespace std;
double max(int a, int b) {return (abs(a+b)+abs(a-b))/2.0;}
double min(int a,int b) {return -max(-a,-b);}

int main(){
    long long n;
    long long m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector <int> v(n,0);
    for (int i=0;i<n;i++){
        if (s[i]=='R') {v[i]=1;}
        else {v[i]=-1;};
    }
    v.push_back(v[0]);
    v.push_back(v[1]);
    vector<int> a(n,0);
    for (int i=0;i<n;i++) {int l;cin>>l; a[i]=l;}
    a.push_back(a[0]);
    vector<int> w(n,0);
    for (int i=0;i<n;i++) {w[i]=a[i];}
    w.push_back(w[0]);
    w.push_back(w[1]);
    for(int j=0;j<m;j++) {
        for (int i=1;i<=n;i++) {
        w[i]=max( (min(w[i]+(v[i-1])*(v[i-1]+1)/2.0 + (v[i+1])*(v[i+1]-1)/2.0 -1 , a[i])), 0);
        if (w[i]==0) {v[i]=0;} ;}
    }
    int s1=accumulate(w.begin()+1,w.end()-1,0);
    
    cout<<s1;
return(0);
}