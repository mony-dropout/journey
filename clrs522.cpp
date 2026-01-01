#include <bits/stdc++.h>
using namespace std; 
using vi=vector<int>; 
using vii=vector<int>;
int hires(vi v) 
{   int n=v.size();
    int ans=0;
    int maxc=0;
    for (int i=0;i<n;i++) 
    {
        if (v[i]>maxc) {ans++;}
        maxc=max(maxc,v[i]);
    }
    return ans;
}
int main()
{
    int n; cin>>n;
    vi v(n);
    for (int i=0;i<n;i++)
    {
        v[i]=i+1;
    }
    int k;
    cin>>k;
    int yes=0;
    
    do 
    {
        if (hires(v)==k) {yes++;}
        /*for (int l:v)
        {
            cout<<l<<" ";
        }
        cout<<endl;*/
    }
    while(next_permutation(v.begin(),v.end()));
    cout<<yes<<endl;
    

    return(0);
}