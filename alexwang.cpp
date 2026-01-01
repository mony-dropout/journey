#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
using vb=vector<bool>;
int main()
{   int t; cin>>t;
    for (int testcase=0;testcase<t;testcase++)
    {
    int n; cin>>n;
    vb v(n+1,false);
    vi ans;
    int i=1;
    while (i<=n)
    {
        if (!v[i]) //you havent written i yet,
        {
            ans.push_back(i);
            v[i]=true;
            int j=2*i;
            while (j<=n)
            {
                if (!v[j])
                {
                    ans.push_back(j);
                    v[j]=true;
                    j*=2;
                }
            }
            
            
        }
        i++;
    }
    for (int l=0;l<ans.size();l++)
    {
        cout<<ans[l];
        if (l!=ans.size()-1) {cout<<" ";}
    }
    if (testcase!=t-1)
    {cout<<endl;}
}
}