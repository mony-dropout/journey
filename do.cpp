#include <bits/stdc++.h>
using namespace std; 
using ll=long long;
int main()
{
    double e=1;
    double x; cin>>x;
    double xp=x;
    ll d=1;
    for (int i=1;i<=50*x;i++)
    {
        e+=xp/d;
        xp*=x;
        d*=(i+1);
    }
    cout<<e;
    return(0);
}

//air 1, im going to do this