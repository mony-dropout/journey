#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;
using vi=vector<int>;
vi yuh(vector<int> w)
{
    vector<int> a(w.size()-1);

    copy(w.begin()+1,w.end(),a.begin());
    return a;
}
int main()
{
int n; cin>>n;
int tot=(n*(n-1))/2;
vi v;
for (int i=0;i<=n;i++)
{
    v.push_back(i);
}
vi w=yuh(v);
for (int x:w)
{cout<<x<<" ";}
return(0);
}