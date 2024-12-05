#include <bits/stdc++.h>
using namespace std;
int f(int n) {if (n!=1) {return ceil(log2(n))+n-1;}
else {return 0;}}

int main(){
    int n;
    cin>>n;
    vector <int> deg(n,0); //d[i] is the degree of vertex i+1 , 
    
    for (int i=0; i<2*n-2; i++) {int x; cin>>x; deg[x-1]+=1;}
    
    int ans=0;
    for (int i=0; i<n; i++)
    {
        if (i==0) {ans+=f(deg[i]+1);}
        else if  (i!=0) {ans+=f(deg[i]);}
    }
    cout<<ans;
    return(0);
}