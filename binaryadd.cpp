#include <bits/stdc++.h>
using namespace std;
int main(){
    /*int n; cin>>n; //the number of bits in the larger number
    vector<int> a(n+1,0),b(n+1,0);
    for (int i=0;i<n;i++)
    {
        int x; cin>>x;
        a[n-1-i]=x; 
    }
    for (int i=0;i<n;i++)
    {
        int x; cin>>x; b[n-1-i]=x;
    }
    */
    

    
    
    string A; string B;
    cin>>A;
    cin>>B;
    int n=max(A.length(),B.length());

    vector<int> a(n+1,0); vector<int> b(n+1,0);
    for (int i=0;i<A.length();i++)
    {
        a[A.length()-1-i]=A[i]-'0';
    }
    for (int i=0;i<B.length();i++)
    {
        b[B.length()-1-i]=B[i]-'0';
    }    
    // the numbers are inputed from left to right, like 11=1011 in binary, so input will be 1 0 1 1; 4 will be 0 1 0 0
    
    int r=0;
    vector<int> c(n+1);
    for (int i=0;i<n+1;i++)
    {
        c[i]=(a[i]+b[i]+r) % 2;
        if (a[i]+b[i]+r>1) {r=1;} 
        else {r=0;}
    }
    int dig=n+1; //check
    /*if (c[n]==1) {cout<<c[n]; dig=n;} //check
    for (int i=n-1;i>=0;i--)
    { cout<<c[i];}*/
    if (c[n]==0) {dig=n;}
    string ans; cin>>ans; //check
    if (ans.length()!= dig) {cout<<"wrong";}
    else{
        for (int i=0; i<dig; i++)
        {
            if (c[dig-1-i]!=ans[i]-'0') {cout<<"wrong"; break;}
            if (i==dig-1) {cout<<"correct";}
        }
    }
    


    return(0);
    
    
}