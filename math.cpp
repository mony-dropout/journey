//lagrange interpolation
#include <bits/stdc++.h>
using namespace std;
//calculate pi (x-ai)
//horner
//divide by linear
//this gives you lagrange interpolation in O(n^2), but how to get the coefficient form from that is the question...
//i mean its not a tough question lol cos im already storing polynomials as vectors lmao
//ok so vector v[i] is poly p=\sum v[i]x^i
using vi=vector<int>;
void merge(vi & v, int x, int y, int z, int & ans)
{
    int l=0;
    int r=0;
    vi a(v.begin()+x,v.begin()+y+1);
    vi b(v.begin()+y+1,v.begin()+z+1);
    int A=a.size();
    int B=b.size();
    vi c;
    for (int i=0;i<A+B;i++)
    {
        if (l>=A) {c.push_back(b[r]); r++; continue;}
        if (r>=B) {c.push_back(a[l]); l++; continue;}
        if (a[l]<=b[r]) {c.push_back(a[l]); l++; continue; }
        else{c.push_back(b[r]); ans+=A-l; r++;}
    }
    copy(c.begin(),c.end(),v.begin()+x);
}
void ms(vi & v, int L, int R, int & ans) //merge v[L] to v[R]
{
    if (R-L<=1) {if (v[R]<v[L]) {int x=v[L]; v[L]=v[R]; v[R]=x; ans++;} return;}
    int mid=(L+R)/2;
    ms(v,L,mid, ans);
    ms(v,mid+1,R, ans);
    merge(v,L,mid,R, ans);
    

}
int main()
{
    int ans=0;
    int n; cin>>n;
    vi v;
    for (int i=0;i<n;i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    int brute=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (v[j]<v[i]) {brute++;}
        }
    }
    ms(v,0,n-1,ans);
    for(int x:v)
    {
        cout<<x<<" ";
        
    }

    cout<<endl;
    cout<<"predicted ans is: "<<ans;
    
    cout<<endl;
    cout<<"brute force ans is: "<<brute;
    cout<<endl;
    return(0);
}
