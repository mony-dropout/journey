#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
void getpoly(vector<int> &p) //thisll modify the storage poly vector
{   int n=p.size()-1;
    for (int i=0;i<=n;i++)
    {
        int x; cin>>x;
        p.push_back(x); //this is interesting, which is faster, pushing back, or initilaising as zero and then assigning new vals, i guess pushing back cuz 
        //initialising presumably takes time
    }
}
void polymult(vi a, vi b, vi & c) //youre multiplying a and b to get c, but we modify c, no need for new vector
{
    c.resize(a.size()+b.size()-1,0);
    for (int i=0;i<=c.size();i++)
    {
        for (int k=0;k<=i;k++)
        {
            c[i]+=a[k]*b[i-k];
        }
    }
}
int main()
{
    
    int da,db; //da=deg a, db=deg b;
    vi a(da+1,0);
    vi b(db+1,0);
    vi c;
    getpoly(a);
    getpoly(b);

}