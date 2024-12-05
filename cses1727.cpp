#include <bits/stdc++.h>
using namespace std;
int main(){
    long double n,k;
    cin>>n>>k;
    long double ans=k;
    for (int i=1;i<=k-1;i++)

{
ans-= pow(i/k , n);
}
cout<<fixed<<setprecision(6)<<ans;
return(0);
}