#include <bits/stdc++.h>
using namespace std;
int main()
{   int ans=0;
    for (int i=1;i<=10;i++)
    {
        int l=pow(2,i);
        ans+=144/l;
    }
    cout<<ans;
    return(0);
}