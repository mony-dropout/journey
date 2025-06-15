#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
vi what(vi w)
{   int n=w.size()-1; //ignore w[0]
    vector<bool> re(n+1,false); //have you reached i already
    vector<vi> leader; //cycle starters
    int i=n;
    while (i>0)
    {
        if (re[i]) {i--; continue;}
        vi a; 
        int j=i;
        while (!re[j]) 
        {a.push_back(j); re[j]=true; j=w[j];}
        leader.push_back(a);
        i--;
    }
    vi p;
    p.push_back(0);
    int lead=leader.size();
    for (int l=lead-1;l>=0;l--)
    {
        for (int x:leader[l])
        {p.push_back(x);}
    }
    return p;

}
//ignore v[0] always
int main()
{
    int n; cin>>n;
    vi v(n+1,0);
    for (int i=1;i<=n;i++)
    {
        int x; cin>>x; v[i]=x;
    }
    cout<<"w cap is"<<endl;
    for (int x: what(v))
    {   if (x==0){continue;}
        cout<<x<<" ";
    }
    cout<<endl;
    return(0);
}
