#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
bool avoids(vi v)
{   bool avoidd =true; //right now it avoids 321
    int n=v.size();
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            for (int k=j;k<n;k++)
            {
                if ((v[i]>v[j]) && (v[j]>v[k]))
                {
                    avoidd=false; return false;;
                } 
            }
            
        }
        
    }
    return true;
    
}
vi complement(vi v)
{
    int n=v.size();
    vi a(n);
    for (int i=0;i<n;i++)
    {
        a[i]=n+1-v[i];
    }
    return a;
}
void print(vi v)
{
    for (int x: v)
    {
        cout<<x<<" ";
    }
}
bool big(vi x, vi y)
{
    int n=x.size();
    auto xf=find(x.begin(),x.end(),n);
    auto yf=find(y.begin(),y.end(),n);
    return ((xf-x.begin())<(yf-y.begin())); 
}
int main()
{
    int n; cin>>n;
    vi v;
    vector<vi> all;
    for (int i=0;i<n;i++)
    {
        v.push_back(i+1);
    }
    do {
        if (avoids((v))) {all.push_back((v));}
    }
    while (next_permutation(v.begin(),v.end()));
    sort(all.begin(),all.end(),big);
    for (vi b: all)
    {
        print(b);
        cout<<endl;
    }
    return(0);
    
}