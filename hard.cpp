#include <bits/stdc++.h>
using namespace std;
#include <fstream>
int main(){
    ifstream cin("sleepy.in");
    ofstream cout("sleepy.out");
    int n;
    cin>>n;
    int ans=0;

    int a;
    cin>>a;
    for (int i=0;i<n-1;i++)
    {
        int b; cin>>b;
        if (b<a){ans=i+1;}
        a=b;
    }
    cout<<ans;
    cin.close();
    cout.close();
    return(0);
}