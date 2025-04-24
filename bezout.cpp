#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;
pair addp(pii p1, pii p2)
{
    return {p1.first+p2.first,p1.second+p2.second};
}
pair multp(pii p, int c)
{
    return {p.first*c,p.second*c};
}
int f(int a, int b, pii p)
{
    return (a*p.first - b*p.second);
}
using vpi=vector<pii>;
int main()
{   int a,b;
    cin>>a>>b;
    vpi r;
    r.push_back({1,0});
    r.push_back({0,1});
    int i=2;
    while(f(a,b,r[i-1])!=1)
    {
        int q=floor((f(a,b,r[i-2]))/f(a,b,r[i-1]));
        r.push_back(addp(r[i-2],multp(r[i-1],-q)));
        i++;
    }
    cout<<r[i-1].first<<" "<<r[i-1].second<<endl;
    cout<<f(a,b,r[i-1])<<endl;
    return(0);
}
