#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
vi inv(vi w)
{
    //ignore w[0];
    int n=w.size()-1;
    vi a(n+1,0);
    for (int i=1;i<=n;i++)
    {
        int j=w[i];
        a[j]=i;
    }
    return a;

}
int main()
{
    int n; cin>>n;
    vi v(n+1,0);
    for (int i=1;i<=n;i++)
    {
        int x; cin>>x; v[i]=x;
    }
    cout<<"w inv is"<<endl;
    for (int x: inv(v))
    {   if (x==0){continue;}
        cout<<x<<" ";
    }
    cout<<endl;
    return(0);
}