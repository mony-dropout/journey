#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector <char> sv;
    for (int i=0; i<26; i++) {
        sv.push_back(s[i]);
    }
    string h;
    cin>>h;
    int ans=1;
    for (int i=0; i<h.length()-1;i++)
    {
        auto ptr2=find(sv.begin(),sv.end(),h[i+1]);
        auto ptr1=find(sv.begin(),sv.end(),h[i]);
        if (ptr1 - ptr2 >=0) {ans=ans+1;}
    }
    cout<<ans;
    return(0);

}
