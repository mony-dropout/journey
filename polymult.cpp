#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
int n;
void getpoly(vector<int> &p) //thisll modify the storage poly vector
{   int n=p.size()-1;
    for (int i=0;i<=n;i++)
    {
        int x; cin>>x;
        p[i]=x;
        /*p.push_back(x); *///this is interesting, which is faster, pushing back, or initilaising as zero and then assigning new vals, i guess pushing back cuz 
        //initialising presumably takes time
    }
    return;
}
void polymult(vi a, vi b, vi & c) //youre multiplying a and b to get c, but we modify c, no need for new vector
{
    c.resize(a.size()+b.size()-1,0);
    for (int i=0;i<a.size();i++)
    {
        for (int j=0;j<b.size();j++)
        {
            c[i+j]+=a[i]*b[j];
        }
    }
    return;
}
vi multipolymult(vii v) //v[i] is the ith polynomial
{
    vi c={1};
    int dc=0;
    /*for (vi x: v)
    {
        dc+=x.size()-1;

    }*/
    //c.resize(dc+1);
    //c.push_back(1);
    vi t;
    for (int i=0;i<n;i++)
    {
        polymult(v[i],c,t);
        //copy(t.begin(),t.end(),c.begin());
        c=t;
    }
    return c;
}
int main()
{
    
    cin>>n; //number of polynomials;
    vii v(n);
    for (int i=0;i<n;i++)
    {
        int d; cin>>d; //degree on nth polynomials
        v[i].resize(d+1);
        getpoly(v[i]);
    }
    vi c=multipolymult(v);
    for (int x:c)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}