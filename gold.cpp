#include <bits/stdc++.h>
using namespace std;
#include <fstream>
void unify(vector<int> &x, const vector<int> &y)
{
    for (int z: y)
    {
        if (binary_search(x.begin(),x.end(),z)==true) {continue;}
        else {
            auto ptr=lower_bound(x.begin(),x.end(),z);
            x.insert(ptr, z);
        }
    }
}

long long choose(int n) {return static_cast<long long> (n) *(n-1) / 2;}
//till here is correct, the unify and nc2;
int main(){
    ifstream cin("cowpatibility.in");
    ofstream cout("cowpatibility.out");
    int n;
    cin>>n;
    vector<vector<int>> s(pow(10,6)+2);
    for (int i=0; i<n; i++)
    {
        for (int j=0;j<5;j++)
        {
            int l; cin>>l;
            s[l].push_back(i);
        }
    }
    //till here is correct, for each i, s[i] is the list of cows which like flavour i...
    long long common=0;
    vector<int> a;
    
      
        
        for (int i=0; i<=pow(10,6)+2; i++ )
        {
            if (s[i].size()<=1){continue;}
            else{
        
            int a0=a.size();
            common+=choose(s[i].size());
            unify(a,s[i]);
            int intersect=a0+s[i].size()-a.size();
            common-=choose(intersect);
            }
        }
        
        
    
    cout<<choose(n)-common;
    return(0);
    cin.close();
    cout.close();


}
