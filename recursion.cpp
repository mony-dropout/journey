#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int inf=1e9+10; 
int stat(vector<int> v, int k) //output the ith smallest element's index (i=1,2,...n)
{   int n=v.size();
    vi kmin(k,inf);
    kmin[0]=v[0];
    for (int i=1;i<k;i++)
    {
        auto ptr=lower_bound(kmin.begin(),kmin.end(),v[i]);
        kmin[ptr-kmin.begin()]=v[i];
    }
    //so v[k-1] is current kth smallest element...
    for (int j=k; j<n;j++)
    {
        if (v[j]<kmin[k-1]) {kmin.insert(lower_bound(kmin.begin(),kmin.end(),v[j]),v[j]); kmin.pop_back();}
    }
    return kmin[k-1];

}
int main()
{
    int n; cin>>n;
    vi v(n);
    for (int i=0;i<n;i++)
    {int x; cin>>x; v[i]=x;}
    int k; cin>>k; //kth smallest elemetn 1<=k<=n
    cout<<stat(v,k);
    return(0);
}