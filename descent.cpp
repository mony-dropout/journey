#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int fact(int n)
{
    if (n==0){return 1;}
    else {return n*fact(n-1);}
}
int binom(int n, int k)
{
    return (fact(n))/(fact(k)*fact(n-k));
}
vector<int> des(int n, vi x)
{   vi t(n,0);
    for (int a=0;a<=n-1;a++)
    {
        for (int l=a;l>=0;l--)
        {
            t[a]+=pow(-1,a-l)*x[l]*binom(n-1-l,a-l);
        }

    }
    return t;
}
int main()
{
    int n=5; //give n
    vi x={1,30,150,240,120}; //give x (you can calculate this too i guess)
    vi t= des(n,x);
    for (int m: t)
    {
        cout<<m<<" ";
    }
    return(0);
}