#include <bits/stdc++.h>
using namespace std;
int N=1000;
#include <fstream>

//make euler function calculator
//make isp
//make t(n)
//print n,T(n),t(n) for all integers upto 1000
vector<bool> vp(N+1,true); //THIS IS THE PRIME BOOLEAN VECTOR
void isp(int )
{
    ofstream cout("filewrite.out");
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
//euler works
int t(int n)
{ int ans=0;
    for (int i=1;i<=n;i++)
    {
        if (n%i!=0) {continue;}
        for (int j=2;j<=n/i;j++)
        {
            if (n%(i*j)==0 && vp[j]) {ans+=phi[j*i]-phi[i];}
        }
    }
    return ans;
}

int main()
{
isp(1);
euler(1);
int cur=0;
for (int i=1;i<=12;i++)
{
    cur+=t(i);
    cout<<"T("<<i<<")"<<" : "<<cur<<endl;
}


//remember to call euler and isp first
//work

return(0);
}
