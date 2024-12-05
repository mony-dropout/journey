#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
    ifstream cin("blist.in");
    ofstream cout("blist.out");
    int n;
    cin>>n;
    vector <int> x(1000,0);
    
        for (int j=0; j<n;j++)
        {
            int s,t,b; cin>>s>>t>>b;
            for (int i=0;i<1000;i++) {
            if (i+1>=s && i+1<=t) {x[i]+=b;} }
        ;}
    //if i switched the order of the loop, why didn't it work? because then cin>>s>>t>>b would be inside two loops (int i, int j) so it would wanna
    //take 1000*n inputs, instead of n...
    auto p=max_element(x.begin(),x.end());
    cout<<*p<<endl;
    cin.close();
    cout.close();
}

//this works for bronze level problem, but this requires 1000*100 operations... try to find a new alogrithm to make this faster... it is given in 
//usaco solution also