#include <bits/stdc++.h>
using namespace std;
int N;


vector<bool> vp; //THIS IS THE PRIME BOOLEAN VECTOR
void isp(int )
{
    vp.assign(N+1,true);
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
int f(double x)
{
    x=floor(x);
    return (x*(x+1))/2;
}


int main()
{
cin>>N;
isp(1);
int ans=0;
for (int p=1;p<=N;p++)
{
    if (!vp[p]) {continue;}
    int tis=0;
    int n=N;
    while (n>1)
    {
        tis+=f(n/p);
        n/=p;
        
    }
    tis*=(p-1);
    tis-=f(N/p);
    ans+=tis;
}
cout<<ans<<endl;
return(0);
}
