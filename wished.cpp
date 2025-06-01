#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
bool samesign(int a, int b)
{
    return (a*b>0);
}
vi red(vi v)
{   for (int i=v.size()-1;i>=0;i--)
    {
        if (v[i]==0) {v.erase(v.begin()+i);}
    }
    vi a;
    a.push_back(v[0]);
    for (auto ptr=v.begin()+1; ptr!=v.end();ptr++)
    {   if (*ptr==0) {continue;}
        if (samesign(v[ptr-v.begin()],v[ptr-v.begin()-1])) {a[a.end()-a.begin()-1]+=v[ptr-v.begin()];}
        else {a.push_back(v[ptr-v.begin()]);}
    }
    if (a[0]<=0) {a.erase(a.begin());}
    if (a[a.size()-1]<=0) {a.erase(a.end()-1);}
    return a;
}
int main()
{
    int n; cin>>n;
    vi dd;
    for (int x=0;x<n;x++)
    {
        int t; cin>>t;
        dd.push_back(t);
    }
    vi v=red(dd);
    for (int x: v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return(0);
}
