#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
int maxx=100;
vii binom(100,vector<int>(100,-1));
long long f(int a, int b)
{
    if (a==0 && b==0) {binom[a][b]=1; return 1;}
    if (a<b) {binom[a][b]=0; return 0;}
    if (b<0) {binom[a][b]=0; return 0;}
    if (a==b) {binom[a][b]=1; return 1;}
    if (binom[a][b]>0) {return binom[a][b];}
    else{ binom[a][b]=f(a-1,b-1)+f(a-1,b); return binom[a][b];}
}
long long s3(int n) //stirling numbers
{
    if (n<3) {return 0;}
    if (n==3) {return 1;}
    long long ans=0;
    for (int k=0;k<=n-3;k++)
    {
        ans+=f(n-1,k)*(pow(2,n-k-2)-1); //i am using s(n,3)=n-1 choose k times s(n-k-1,2) cuz im smart 
    }
    return ans;
}
int main()
{
    int n; cin>>n;
    
    cout<<s3(n)<<endl;
    return(0);
}