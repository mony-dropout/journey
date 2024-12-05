#include <bits/stdc++.h>
using namespace std;
int main()
{   int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        int x; cin>>x; v[i]=x;
    }
    map<int,int> freq;
    for (int i=0;i<n;i++)
    {
        freq[v[i]]++;
    }
    for (int i=0;i<n;i++)
    {
        cout<<"index "<< i+1 <<" contains: "<<v[i]<<" and it occurs : "<<freq[v[i]]<<" times."<<endl;
    }
    return(0);
}