#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using ii=pair<int,int>;
using vii=vector<ii>;
int main()
{   map<int,int> freq;
    vi v;
    int n; cin>>n;
    for (int i=0;i<n;i++)
    {
        int x; cin>> x; v.push_back(x);
    }
    for (int x:v)
    {
        freq[x]++;
    }
    /*for (auto p:freq)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return(0);*/
    //
    for (auto ptr=freq.begin(); ptr!=freq.end();ptr++)
    {
        cout<<ptr->first<<" "<<ptr->second<<endl;
    }
    //whats the difference between these bruh?
    return(0);

}