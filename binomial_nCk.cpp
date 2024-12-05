// this is the binomial calculator
/* lets see if i can do this*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cout<<"Calculate nCk \n";
    cout<<"Enter n: \n";
    cin>>n;
    cout<<"Enter k: "<<endl;
    cin>>k;
    long long a=1;
    long long b=1;
    long long c=1;
    if (n>=k && k>=0) {for (int i=1; i<=n; i++) {a=a*i;}} else {a=0;}
    for (int i=1; i<=k; i++) {b=b*i;}
    for (int i=1; i<=n-k; i++) {c=c*i;}
cout<<"Answer is: "<<a/(b*c)<<endl;
return(0);
}