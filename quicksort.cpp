#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;

void qsort(vector<int> &v, int a, int b)
{
    if (b<=a) {return;}
    int pivot=v[a];
    int bound=a;
    for (int i=a+1;i<=b;i++)
    {
        if (v[i]<=pivot) {swap(v[i],v[bound+1]); bound++;}
    }
    swap(v[a],v[bound]);
    qsort(v,a,bound-1);
    qsort(v,bound+1,b);
}
int main(){
    int n; cin>>n;
    vi a;
    for (int i=0;i<n;i++)
    {
        int x; cin>>x;
        a.push_back(x);
    }
    qsort(a,0,n-1);
    for (int j:a)
    {
        cout<<j<<" ";
    }
    return(0);
}