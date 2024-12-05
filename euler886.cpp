#include <bits/stdc++.h>
using namespace std;

bool euler(vector<int> v) //euler(v) is true if it is a coprime permutation
{   
    bool x=true;
    for (int i=0;i<=v.size()-2;i++)
    {
        if (gcd(v[i],v[i+1])>1) {x=false; return x;}
        
    }
    return x;

}
void print(vector<int> v)
{
    for (int x:v) {cout<<x<<" ";}
    return;
}
int fact(int n)
{
    if (n==1) return 1;
    return n * fact(n-1);
}
int main()
{
    //int n; cin>>n;
    
    vector<int> v; //(n-1);
    /*for (int i=0;i<n-1;i++)
    {
        v[i]=i+2;
    }*/
    v={2,3,10,15};
    int perm=0;
    for (int i=0;i<fact(v.size());i++)
    {
        if (euler(v)) {perm++;}
        next_permutation(v.begin(),v.end());
    }
    cout<<perm;
    return(0);
    
}