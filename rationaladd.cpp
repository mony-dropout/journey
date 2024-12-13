//i wanna try to find 1^n+2^n+...q^n
//n=0: <0,1>
//n=1: <0,1/2,1/2>
//n=2: q(q+1)(2q+1)/6= q^3/3 + q^2 5/6 + q/6: <2/6,3/6,1/6>
//n=3: <1/4,2/4,1/4>
//for n you will have a n+1 degree polynomial
#include <bits/stdc++.h>
using namespace std;
const int M;
int n; //take n as an input
//vector<int> power(M,1); //ill change this in the first line of int main after taking n as input
//first i want something that will convert decimals to rational numbers
//btw, you dont gotta worry about nothing bruh, this is your life, just do whatever the fuck you feel like all the time lmao, that's it
int gcd(int a, int b) 
{
    return gcd(a%b,b);
}
void reduce(pair<int,int> &p)
{
    int g=gcd(p.first,p.second);
    p.first=p.first/g;
    p.second=p.second/g;
    return;
}
using vi=vector<int>;
using vp=vector<pii>;
using pii=pair<int,int>;
pii times(int a, pii  p)
{
    p.first*=a;
    return p;
}
pii add(pii p, pii q)
{
    pii ans;
    ans.second=p.second*q.second;
    ans.first=p.first*q.second+p.second*q.first;
    reduce(ans);
    return ans;

}
pii aiqi(vp v, int q, int d) //this is a_0q^0+a_1q+a_2q^2+...a_dq^d;
{   int power=1;
    
    pii ans={0,1};
    for (int i=0;i<=d;i++)
    {
        pii p=v[i];
        
        pii qt=times(power,p);
        power*=q;
        
        ans=add(ans,qt);
    }
    return ans;
}
pii solve()
