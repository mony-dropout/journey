#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
void merge(vector<int>& v, int r1, int r2, int r3)
{
    int n1=r1;
    int n2=r2+1;
    vector<int> a(v.size());
    for (int i=r1;i<=r3;i++)
    {
        if (n1>r2)  {a[i]=v[n2]; n2++;}
        else if (n2>r3) {a[i]=v[n1]; n1++;}
        else{
            if (v[n1]<=v[n2]) {a[i]=v[n1]; n1++;}
            else {a[i]=v[n2]; n2++;}
        }    
    }
    copy(a.begin()+r1,a.begin()+r3+1,v.begin()+r1);
}
void msort(vi & v, int low, int high)
{
    if (high-low<=1) {if (v[high]<v[low]) {swap(v[low],v[high]);} return;}
    int mid=(low+high)/2;
    msort(v,low,mid);
    msort(v,mid+1,high);
    merge(v,low,mid,high);
}
int main(){
    vector<int> v={6,2,1,5,3,4,8,9,1};
    msort(v,0,v.size()-1);
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return(0);
}