#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
int findj(vi v) //find out that like the last element of v is the jth largest element in v; v is 0 indexed, but we ignore 0
{
    int n=v.size()-1;
    int last=v[n];
    int j=1;
    for (int i=1;i<=n;i++)
    {
        if (v[i]>last) {j++;}
    }
    return j;
}
int maj(vector<int> w) //w[0] is empty, w[1],w[2]...w[n]
{   int ans=0;
    int n=w.size()-1;
    for (int i=1;i<n;i++)
    {   
        if (w[i]>w[i+1])
        {
            ans+=i;
        }
        
    }
    return ans;

}
int inv(vector<int> w)
{
    int ans=0;
    int n=w.size()-1;
    for (int i=2;i<=n;i++)
    {
        for (int j=1;j<i;j++)
        {
            if (w[j]>w[i])
            {ans++;}
        }
    }
    return ans;
}
int main()
{
    int n; cin>>n;
    vi v(n+1,0);
    for (int k=1;k<=n;k++)
    {
        int x; cin>>x; v[k]=x;
    }
    
    int maj1=maj(v);
    int inv1=inv(v);
    int i=0;
    int n_c=n;
    int k_c=maj1;
    cout<<"maj is "<<maj1<<endl<<"inv is "<<inv1;
    return(0);
    
    
}
