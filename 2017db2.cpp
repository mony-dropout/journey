#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> op(n,-1);
    for (int i=0;i<n;i++){int x; cin>>x; op[i]=x;}
    vector <int> rp(n,-1);
    for (int i=0;i<n;i++) {rp[op[i]]=i;}
    vector <int> rp2(n,-1);
    vector <int> rp3(n,-1);
    for (int i=0;i<n;i++) {rp2[i]=rp[rp[i]];}
    for (int i=0;i<n;i++) {rp3[i]=rp[rp2[i]];}
    vector <int> co(n,-1) ;
    for (int i=0;i<n;i++) {int m; cin>>m; co[rp[i]]=m;}
    for (int k: co) {cout<<k<<endl;}
    return(0);

}

//bro this is  not going to be easy, we gotta work very very very hard for this bruh... but i am going to get this shit cos i want to man, cos i wanna be the 
//ever man... i wanna be jee mains 300, jee advanced air 1, ioi gold... you can do anything bruh... let's go all the way up...