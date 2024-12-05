#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n=pow(2,32)+1;
    int d=2; 
    while (d<sqrt(n)+1)
    {
        if (n % d == 0) {cout<<d; break;}
        d++;
    }
    return(0);
}