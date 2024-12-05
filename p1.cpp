#include <bits/stdc++.h>
using namespace std;
int main()
{   int t; cin>>t;
for (int q=0;q<t;q++)
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n+1);
    v[0]=0;
    for (int i=1;i<=n;i++)
    {
        int x; cin>>x; v[i]=x;
    }
    sort(v.begin(),v.end());
    vector<int> sum(n+1);

     //this is v[1]++...v[i]
    sum[0]=v[0];
    for(int i=1;i<=n;i++)
    {
        sum[i]=v[i]+sum[i-1];
    }
    vector<int> free(n+2);
    free[0]=0;
    for (int i=1;i*(k+1)+1<=n;i++)
    {
        free.push_back(free[i-1]+v[i*(k+1)+1]);
    }



    for (int m=1;m<=n;m++)
    {   int l=floor(m/(k+1));
        //if (m<=k) {cout<<sum[m];}
        //int l=floor(m/(k+1));
        cout<<sum[m]-free[l];
        if (m!=n) {cout<<" ";}
    }
    if (q!=t-1) {cout<<endl;}
}    
    return(0);
}