#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
//the total number of inversions in v(1:n) is no of inversions in v(1:n/2)+ inv. in v(n/2: n) + no. of pairs (i,j) such that j > n/2 and i<n/2 but v[j]<v[i]; 
//ie. during merge inversions...
//my strategy to avoid double count is to only count in  merge when an element from v(n/2:n) comes before; at that point, i add the number of 
//elements from the first vector that are yet to come, ie. r2-n1+1;
int merge(vector<int>& v, int r1, int r2, int r3)
{   int cm=0;
    int n1=r1;
    int n2=r2+1;
    vector<int> a(v.size());
    for (int i=r1;i<=r3;i++)
    {
        if (n2>r3) { a[i]=v[n1]; n1++;}
        else if (n1>r2) {a[i]=v[n2]; n2++;}
        else 
        {
            if (v[n1]<=v[n2]) {a[i]=v[n1]; n1++;}
            else if (v[n2]<v[n1]) {a[i]=v[n2]; n2++; cm+=r2-n1+1;}
        }
    }
    copy(a.begin()+r1,a.begin()+r3+1,v.begin()+r1);
    return cm;
}
int msort(vector<int> &v, int low, int high)
{
    int inv=0;
    
    if (high-low<=1) {if (v[high]<v[low]) {swap(v[high],v[low]);  return 1;} return 0;}
    int mid=(low+high)/2;
    inv=msort(v,low,mid)+msort(v,mid+1,high)+merge(v,low,mid,high);
    return inv;
}
int main()
{
    int n; cin>>n;
    vi v(n);
    for (int i=0;i<n;i++)
    {
        int x; cin>>x;
        v[i]=x;
    }
    cout<<msort(v,0,n-1);
    return(0);
}    


//keep going bruh..
//this is my dream... let's be the best ever