#include <bits/stdc++.h>
using namespace std;
#include <fstream>
int main(){
    ifstream cin("planting.in");
    ofstream cout("planting.out");
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i=0; i<2*n-2; i++){
        int x; cin>>x;
        a[x-1]++;
    }
    auto ptr=max_element(a.begin(),a.end());
    cout<<*ptr+1;
    return(0);
    cin.close();
    cout.close();
    
}