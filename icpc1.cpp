#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int main()
{   int t; cin>>t;
    for(int q=0;q<t;q++)
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
    vi sum(n+1);
    sum[0]=0;
    for(int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+v[i];
    }
    //int numb=(n-1)/(k+1);
   /* vi free(numb+1);
    free[0]=v[1];
    for (int i=1;i<=numb;i++)
    {
        free[i]=free[i-1]+v[i*(k+1)+1];
    }*/
    //int l=0;
    //int ans=0;
    for (int m=1;m<=n;m++)
    {   int free=0;
        int sub=k+1;
        while(m+1-sub>0)
        {
            free+=v[m+1-sub];
            sub+=(k+1);
        }
        int ans=sum[m]-free;
        cout<<ans;
        /*if (m!=n)*/ cout<<" ";
    }
    /*if (q!=t-1)*/ cout<<endl;
    }
    return(0);
}