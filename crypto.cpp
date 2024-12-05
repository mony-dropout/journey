//gcd
#include <bits/stdc++.h>
using namespace std;
int ggc(int a, int b)
{
    if (a%b==0) return b;
    else return ggc(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<ggc(a,b)<<endl;
    return(0);
}