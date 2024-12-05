#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    for (int i=0; i<n; i++) {
        int x; cin>>x;
        if (x%2==0) {even+=1;}
        else {odd++;}
    }
    int ans;
    if (even>odd) {ans=2*(odd)+1;}
    else if (even==odd) {ans=2*even;}
    else if (odd>even) {
        ans = 2*even;
        odd=odd-even;
        ans+= 2*floor(odd/3.000);
        double x= odd%3;
        if (x==1) {ans--;}
        else if (x==2) {ans++;}
        
    }
    cout<<ans;
}