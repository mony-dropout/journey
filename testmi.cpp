#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
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
    for (int i=1;i<=n;i++)
    {
        int x; cin>>x; v[i]=x;
    }
    cout<<"maj: "<<maj(v)<<endl;
    cout<<"inv: "<<inv(v)<<endl;
}