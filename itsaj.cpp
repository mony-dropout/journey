#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;

int main()
{
    int n; cin>>n;
    map <int,int> m;
    for (int i=0;i<n;i++)
    {
        int x; cin>>x;
        m[x]++;
    }
    for (auto ptr=m.begin(); ptr!=m.end();ptr++)
    {
        if (ptr->second == 1) {cout<<ptr->first<<" ";}
    }
    cout<<endl;
    return (0);

}