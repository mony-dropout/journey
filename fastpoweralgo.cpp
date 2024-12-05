#include <bits/stdc++.h>
using namespace std;
void bin(int n, vector<int> &v)
{
    int logd=log2(n);
    v.resize(logd+1);
    for (int i=0;i<logd+1;i++)
    {
        v[i]=n%2;
        n= (n- n%2 )/2;
    }
}
int main()
{   
    vector<int> v;
    int a,b;
    cin>>a>>b;
    bin(b,v);
    int x=a;
    long long ans=1;
    int logd=log2(b);
    for (int i=0;i<logd+1;i++)
    {   
        if (v[i]>0) {ans=ans*x;}
        x=x*x;
    }
    cout<<ans;
    return(0);
}