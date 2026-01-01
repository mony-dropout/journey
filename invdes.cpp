#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
vector<int> D(vector<int> w) //again w is 0 indexed but we dont care about w[0]
{   vi descents;
    int n=w.size()-1;
    for (int i=1;i<n;i++)
    {
        if (w[i]>w[i+1]) {descents.push_back(i);}
    }
    return descents;
}
vector<int> inv(vi w)
{
    int n=w.size()-1;
    vi a(n+1,0);
    for (int i=1;i<=n;i++)
    {
        int j=w[i];
        a[j]=i;
    }
    return a;
}
vector<int> ID(vi w)
{
    vi winv=inv(w);
    return D(winv);
}
void print(vi v) //print 0 indexed vector ignoring v[0]
{
    int n=v.size();
    cout<<"{";
    for (int i=0;i<n;i++)
    {cout<<v[i]; if (i!=n-1) {cout<<",";}}
    cout<<"}";
}
int main()
{
    int n; cin>>n; 
    vi w(n+1,0);
    for (int i=1;i<=n;i++)
    {
        w[i]=i;
    }
    vector<vi> allperms;
    allperms.push_back({0});
    
    do {
    allperms.push_back(w);
    }
    while (next_permutation(w.begin()+1,w.end()));
    int lex;
    while (cin>>lex)
    {
    vi v=allperms[lex];
    cout<<"lexographic number "<<lex<<" permutation is: "; 
    for (int idk : v)
    {
        if (idk!=0) {cout<<idk<<" ";}
    }
    cout<<endl;
    cout<<"D(w)  is: "; print(D(v)); cout<<endl;
    cout<<"ID(w) is  "; print(ID(v)); cout<<endl;
    cout<<"inverse permutation is: ";
    vi vinw=inv(v);
    for (int idk : vinw)
    {
        if (idk!=0) {cout<<idk<<" ";}
    }
    cout<<endl;

    }

    return(0);
}