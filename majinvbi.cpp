#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
vector<int> descset(vector<int> w) //w[0] is not empty
{
    vector<int> a;
    int n=w.size();
    for (int i=0;i<n-1;i++)
    {
        if (w[i]>w[i+1])
        {
            a.push_back(i+1);
        }
    }
    return a;
}
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
vi winv(vi w)
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
    int tot=(n*(n-1))/2;
    vector<vector<vector<int>>> eqmaj(tot+1);
    vector<vector<vector<int>>> eqinv(tot+1);
    //vector<vector<vector<vector<int>>> f(tot+1,vector<vector<vector<int>> (tot+1)); //f(a,b) is inv =a and maj=b
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
    /*int x;
    while (cin>>x)  
    {   cout<<"#maj=x: "<<eqmaj[x].size()<<endl;
        cout<<"#inv=x: "<<eqinv[x].size()<<endl;
        vi t(n+1,0);

        //sort(eqmaj[x].begin(),eqmaj[x].end(),[=](vi a, vi b){return (a[n-1]<b[n-1]);});
        //sort(eqinv[x].begin(),eqinv[x].end(),whereisn);
        //for everything with maj=x im printing all their inv values
        for (vi v: eqmaj[x])
        {
            for (int l:v)
            {
                cout<<l;
            }
            cout<<" has inv = ";
            copy(v.begin(),v.end(),t.begin()+1);
            cout<<inv(t)<<endl;
        }
        cout<<endl;
        
        /*for (vi v: eqinv[x])
        {
            for (int l:v)
            {cout<<l;}
            cout<<" ";
        }
        cout<<endl;*/  //i guess i already know enough about inversions, lets focus on maj for now
        //this is the code for actually printing those permutations
        /*for (int i=n;i>0;i--)
        {   int alt=0;
            for (vi v: eqmaj[x])
            {
                if (v[n-1]==i) {alt++;}
            }
            cout<<"last is " <<i<<": "<<alt<<endl;
        }
       //so conjecture was true
        //this tells you how many of these permutations w maj=x end with a certain number
    */
    /*for (int k=0;k<=tot;k++)
    {
        cout<<"("<<n<<","<<k<<") : "<<eqmaj[k].size()<<endl;
    }
    return 0;*/
    int m; cout<<endl<<"Enter number of elements in descent set and then descent set"<<endl;
    vi ds;
    cin>>m; 
    for (int j=0;j<m;j++)
    {   int x; cin>>x;
        ds.push_back(x);
    }
    int major=accumulate(ds.begin(),ds.end(),0);
    for (vi v : eqmaj[major])
    {
        if (equal(ds.begin(),ds.end(),descset(v).begin()))
        {
            vi p(n+1,0);
            for (int i=1;i<=n;i++)
            {
                p[i]=v[i-1];
            }
            vi act=winv(p);
            for (int i=1;i<=n;i++)
            {
                cout<<act[i];
            }
            cout<<" --- maj: "<<maj(act)<<" --- "<<"inv: "<<inv(act)<<endl;
        }
    }
    return(0);
    }