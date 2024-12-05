#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
using ll=long long;
const int maxn=100;
vii binom(maxn+2,vi(maxn+2,0));
void prec()
{   binom[0][0]=1;
    

    for (int i=1;i<=maxn;i++)
    {   binom[i][0]=1;
        for (int j=1;j<=i;j++)
        {
            binom[i][j]=binom[i-1][j]+binom[i-1][j-1];
        }
    }
}
long long s3(int n)
{   
    ll pow2=pow(2,n-2);
    int ans=0;
    for (int i=0;i<=n-3;i++)
    {
        ans+= binom[n-1][i]*(pow2-1);
        pow2=pow2/2;
    }
    return ans;
}
int main()
{
    prec();
    int n; cin>>n;
    for (int i=1;i<=n;i++)

    {
        cout<<s3(i)<<endl;
    }
//return(0);
}


