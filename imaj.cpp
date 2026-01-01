#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int maj(vector<int> v) //1 indexed
{
    int n=v.size();
    for (int i=0;i<n-1;i++)
    {   int ans=0;
        if (v[i]>v[i+1]) {ans+=i+1;}
    }
    return ans;
}
vi winv(vi v) //1 indexed
{
    int n=v.size();
    vi a(n);
    for (int i=0;i<=n-1;i++)
    {
        a[v[i]]=i+1;
    }
    return a;
}
vi ID(vi v) //1 indexed again
{
    vi a;
    int n=v.size();
    vi vl=winv(v);
    for (int i=0;i<n-1;i++)
    {
        if (vl[i]>vl[i+1]){a.push_back(i+1);}
    }
    return a;
}
int imaj(vi v) //1 indexed
{
    return maj(winv(v));
}
int main()
{
    
}