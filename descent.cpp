#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>; 
using vii=vector<vi>;
vii c;
int binom(int n, int k)
{   if (k<0) {return 0;}
    if (k>n) {return 0;}
    if (k==0) {return 1;}
    if (k==n) {return 1;}
    if (c[n][k]>0) {return c[n][k];}
    else {c[n][k]=binom(n-1,k-1)+binom(n-1,k); return c[n][k];}
}
int coeff(int a, int t)
{
    int ans=0;
    
    for(int p=0; p<=min(t,a+1); p++)
    {
        ans+=pow(t-p,a)*(1-2*(p%2))*binom(a+1,p);
        
    }
    return ans;
}
int main()
{
    int n; cin>>n;
    c.resize(n+2,vi(n+2,-1));
    for (int t=0;t<=2*n +1 ; t++)
    {
        cout<<"x^"<<t<<" : "<<coeff(n,t)<<endl;
    }

    return(0);
    
}
//works perfectly wow