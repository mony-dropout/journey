#include <bits/stdc++.h>
using namespace std;
int N=1000;
//#include <fstream>

//make euler function calculator
//make isp
//make t(n)
//print n,T(n),t(n) for all integers upto 1000
vector<bool> vp(N+1,true); //THIS IS THE PRIME BOOLEAN VECTOR
void isp(int )
{
    //vector<bool> v(n+1,true);
    vp[0]=false;
    vp[1]=false;
    //v[i] is if i is prime
    for (int i=1;i<=floor(pow(N,0.5));i++)
    {
        if (!vp[i]) {continue;}
        for (int j=i*i;j<=N;j+=i)
        {
            vp[j]=false;
        }
        
    }
    return ;
}
//prime works
vector<int> phi(N+1,0); //THIS IS THE EULER PHI VECTOR
void euler(int )
{
    for (int i=1;i<=N;i++)
    {
        phi[i]=i;
    }
    for (int i=1;i<=N;i++)
    {
        for (int j=2*i;j<=N;j+=i)
        {
            phi[j]-=phi[i];
        }
    }
    return;
}
int main()
{
    euler(1);
    isp(1);
int n; cin>>n;
int ans=0;
for (int p=1;p<=n;p++)
{
    if(!vp[p]) {continue;}
    for (int b=1;b<=n;b++)
    {
        ans+=(floor(n/(b*p))*(phi[b*p]-phi[b]));
    }
}
cout<<ans<<endl;
}
