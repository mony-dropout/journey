#include <bits/stdc++.h>
using namespace std;
double H(int n)
{
    if (n==1) {return 1;}
    else {return static_cast<double>(1)/n + H(n-1);}
}
int fact(int n)
{
    if (n==0) {return 1;}
    else {return n*fact(n-1);}
}
int s(int n)
{
    int a=0;
    for (int t=1;t<=n-2;t++)
    {
        a+=(fact(n-1)/(t+1))*H(t);
    }
    return a;
}
int main()
{
    for (int n=3;n<11;n++)
    {
        cout<<s(n)<<endl;
    }
return(0);
}