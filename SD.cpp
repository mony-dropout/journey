#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int majbyval(vector<int> w) //w[0] is empty, w[1],w[2]...w[n]
{   int ans=0;
    int n=w.size()-1;
    for (int i=1;i<n;i++)
    {   
        if (w[i]>w[i+1])
        {
            ans+=w[i];
        }
        
    }
    return ans;

}
int SD(vector<int> w)
{
    int ans=0;
    int n=w.size()-1;
    for (int i=1;i<=n;i++)
    {
        if (w[i]<i) {ans+=i;}
        
    }
    return ans;
}
vi yuh(vector<int> w)
{
    vector<int> a(w.size()-1);
    copy(w.begin()+1,w.end(),a.begin());
    return a;
}
bool whereisn(vi a, vi b)
{   int n=a.size();
    auto a1=find(a.begin(),a.end(),n);
    auto b1=find(b.begin(),b.end(),n);
    int a0 = (a1-a.begin());
    int b0 = (b1-b.begin());
    return(a0<b0);
}
int main()
{
    int n; cin>>n;
    int tot=(n*(n+1))/2 -1;
    vector<vector<vector<int>>> eqmajbyval(tot+1);
    vector<vector<vector<int>>> eqSD(tot+1);
    vi w(n+1);
    for (int i=0;i<=n;i++)
    {
        w[i]=i;
    }
    /*for (int i=1;i<=n+1;i++) {cout<<" ";}*/
    cout<<"majbyval SD";
    cout<<endl;
    do {
        /*for (int x:w) {if (x>0) {cout<<x;}} 
        cout<<" "<<maj(w)<<" "<<inv(w)<<endl;*/
        int maj1=majbyval(w);
        int inv1=SD(w);
        eqmajbyval[maj1].push_back(yuh(w));
        eqSD[inv1].push_back(yuh(w));
    }
    while (next_permutation(w.begin()+1,w.end()));
    int x;
    while (cin>>x)  
    {   cout<<"#maj=x: "<<eqmajbyval[x].size()<<endl;
        cout<<"#inv=x: "<<eqSD[x].size()<<endl;
        vi t(n+1,0);

        //sort(eqmaj[x].begin(),eqmaj[x].end(),[=](vi a, vi b){return (a[n-1]<b[n-1]);});
        //sort(eqinv[x].begin(),eqinv[x].end(),whereisn);
        //for everything with maj=x im printing all their inv values
        /*for (vi v: eqmaj[x])
        {
            for (int l:v)
            {
                cout<<l;
            }
            cout<<" has inv = ";
            copy(v.begin(),v.end(),t.begin()+1);
            cout<<inv(t)<<endl;
        }
        cout<<endl;*/
        cout<<"These have majbyval = "<<x<<endl;
        for (vi v: eqmajbyval[x])
        {
            for (int l:v)
            {cout<<l;}
            cout<<" ";
        }
        cout<<endl;
        cout<<"These have sum SD = "<<x<<endl;
        for (vi v: eqSD[x])
        {
            for (int l:v)
            {cout<<l;}
            cout<<" ";
        }
        cout<<endl;
          //i guess i already know enough about inversions, lets focus on maj for now
        //this is the code for actually printing those permutations
        /*for (int i=n;i>0;i--)
        {   int alt=0;
            for (vi v: eqmaj[x])
            {
                if (v[n-1]==i) {alt++;}
            }
            cout<<"last is " <<i<<": "<<alt<<endl;
        }*/
       //so conjecture was true
        //this tells you how many of these permutations w maj=x end with a certain number

    }

    return 0;
}