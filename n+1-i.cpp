//given k and i, give me all w n+1 with major=k and ending in n+1-i and their respective inv, and then also give me all w n with maj=k-i and their inv also
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
    
    
    cout<<endl;
    do {

        int maj1=maj(w);
        int inv1=inv(w);
        eqmaj[maj1].push_back(yuh(w));
        eqinv[inv1].push_back(yuh(w));
    }
    while (next_permutation(w.begin()+1,w.end()));
    cout<<"k = "<<endl;
    int k;
    cin>>k;
    cout<<"n-i is at end "<<endl;
    int i; 
    while(cin>>i)
    {

        /*cout<<"#maj=x: "<<eqmaj[x].size()<<endl;
        cout<<"#inv=x: "<<eqinv[x].size()<<endl;*/
        vi t(n+1,0);

        //sort(eqmaj[x].begin(),eqmaj[x].end(),[=](vi a, vi b){return (a[n-1]<b[n-1]);});
        //sort(eqinv[x].begin(),eqinv[x].end(),whereisn);
        //for everything with maj=x im printing all their inv values
        for (vi v: eqmaj[k])
        {   
            if (v[n-1]==n-i)
            {
            for (int l:v)
            {
                cout<<l;
            }
            cout<<" has inv = ";
            copy(v.begin(),v.end(),t.begin()+1);
            cout<<inv(t)<<endl;
            }
        }
        cout<<endl;
        cout<<"these are all the n+1 permutations ending in n-i"<<endl;
        
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
    }
    for (int k=0;k<=tot;k++)
    {
        cout<<"("<<n<<","<<k<<") : "<<eqmaj[k].size()<<endl;
    }
    return 0;
    }
