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

    while (cin >> i)
    {
        // collect all maj=k perms ending in n+1-i, along with their inv
        vector<pair<vi,int>> results;
        for (auto &v : eqmaj[k]) {
            if (v[n-1] == n - i) {
                // rebuild a 1-based w to call inv()
                vi tmp(n+1);
                copy(v.begin(), v.end(), tmp.begin()+1);
                int invv = inv(tmp);
                results.emplace_back(v, invv);
            }
        }

        // sort by inversion count
        sort(results.begin(), results.end(),
             [](auto &A, auto &B){ return A.second < B.second; });

        // print them
        for (auto &pr : results) {
            for (int x : pr.first) cout << x;
            cout << " has inv = " << pr.second << "\n";
        
        }
        cout << "\nthese are all the n+1 permutations ending in n+1-" << i << "\n\n";
    }
    return 0;

    }

    
