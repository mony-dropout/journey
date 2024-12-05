#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    for (int i=0; i<t; i++) {
        string s;
        cin>>s;
        if (s[s.length()-1]=='0')
         {cout<<'E'<<endl;}
        else {cout<<'B'<<endl;}
    }
    return(0);
}