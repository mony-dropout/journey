#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int maj(vector<int> w) //w[0] is empty, w[1],w[2]...w[n]
{   int ans=0;
    int n=w.size()-1;
    for (int i=1;i<n;i++)
    {   
        if (w[i]>w[i+1])
        {
            ans+=i;
        }
        
    }
    return ans;

}
int inv(vector<int> w)
{
    int ans=0;
    int n=w.size()-1;
    for (int i=2;i<=n;i++)
    {
        for (int j=1;j<i;j++)
        {
            if (w[j]>w[i])
            {ans++;}
        }
    }
    return ans;
}
vi yuh(vector<int> w)
{
    vector<int> a(w.size()-1);
    copy(w.begin()+1,w.end(),a.begin());
    return a;
}
int main()
{
    int n; cin>>n;
    int tot=(n*(n-1))/2;
    vector<vector<vector<int>>> eqmaj(tot+1);
    vector<vector<vector<int>>> eqinv(tot+1);
    vi w(n+1);
    for (int i=0;i<=n;i++)
    {
        w[i]=i;
    }
    /*for (int i=1;i<=n+1;i++) {cout<<" ";}*/
    cout<<"maj inv";
    cout<<endl;
    do {
        /*for (int x:w) {if (x>0) {cout<<x;}} 
        cout<<" "<<maj(w)<<" "<<inv(w)<<endl;*/
        int maj1=maj(w);
        int inv1=inv(w);
        eqmaj[maj1].push_back(yuh(w));
        eqinv[inv1].push_back(yuh(w));
    }
    while (next_permutation(w.begin()+1,w.end()));
    int x;
    while (cin>>x)  
    {   
        for (vi v: eqmaj[x])
        {
            for (int l:v)
            {cout<<l;}
            cout<<" ";
        }
        cout<<endl;
        for (vi v: eqinv[x])
        {
            for (int l:v)
            {cout<<l;}
            cout<<" ";
        }
        cout<<endl;

    }

    return 0;
}