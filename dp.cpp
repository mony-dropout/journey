//finding nCr by precomputing; top down
#include <bits/stdc++.h>
using namespace std;
using vll=vector<long long>;


    vector<vector<long long>>  v;
long long f(int a, int b)
{   
   if (a<0 || b<0) {return 0;}
   if (b==0 && a>0) {v[a][b]=1; return v[a][b];}
   if (a==0 && b==0) {v[a][b]=1; return v[a][b];}
   if (b>a) {v[a][b]=0; return v[a][b];}
   if (v[a][b]>=0) {return v[a][b];}
   v[a][b]=f(a-1,b)+f(a-1,b-1);
   return v[a][b]; 
}

int main(){

    int a, b;
    cin>>a>>b;
    v.resize(a+5,vll(a+5,-1));
    cout<<f(a,b);
    
    return(0);
}