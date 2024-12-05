#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v={0,5,5,3,4,2};
    auto max=max_element(v.begin(),v.end());
    
    int z = *max;
    auto final=v.begin();
    for (auto i=v.begin()+v.size()-1;i!=v.begin();i--) //this might not work if max is v[0]
    {if (*i==z) {final=i;} 
    if (*i==z) {break;}};
    cout<<final - v.begin(); 

    return(0);
}