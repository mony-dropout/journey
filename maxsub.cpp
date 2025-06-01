/*
<n> look at a1, and then if a1-b1 is bigger than 0; look at <n-2> but fisrt element is now a1-b1+a2; else first element is a2...
*/
#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>; 
using vii=vector<vi>;
bool signsame(int a, int b)
{
    if (a*b>=0) {return true;}
    else {return false;}
}

vi red(vi v)
{   for (int i=v.size()-1;i>=0;i--)
    {
        if (v[i]==0) {v.erase(v.begin()+i);} //make this more efficient
    }
    vi a;
    a.push_back(v[0]);
    for (auto ptr=v.begin()+1; ptr!=v.end();ptr++)
    {   if (*ptr==0) {continue;}
        if (signsame(v[ptr-v.begin()],v[ptr-v.begin()-1])) {a[a.end()-a.begin()-1]+=v[ptr-v.begin()];}
        else {a.push_back(v[ptr-v.begin()]);}
    }
    if (a[0]<=0) {a.erase(a.begin());}
    if (a[a.size()-1]<=0) {a.erase(a.end()-1);}
    return a;
}


int main()
{
    int n; cin>>n;
    vi pl;
    for (int i=0;i<n;i++)
    {   int x; cin>>x;
        pl.push_back(x);
    }
    vi v=red(pl); //v[even] are positive, v[odd] are negative... ends and starts w positive
    //for (int x: v) {cout<<x<<" ";}
    int redn=v.size();
    vi findmax;
    //findmax.push_back(v[0]);
    for (int i=0;i<=redn-2;i+=2)
    {
        if (v[i]+v[i+1]>=0) {v[i+2]+=(v[i]+v[i+1]);}
        else {findmax.push_back(v[i]);}
    }
    findmax.push_back(v[redn-1]);
    int maxx=0;
    for (int t=0;t<v.size();t++)
    {
        maxx=max(v[t],maxx);
    }
    cout<<maxx<<endl;
    return(0);



}