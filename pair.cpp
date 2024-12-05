#include <bits/stdc++.h>
using namespace std;
using ii=pair<int,int>;
#define ff first
#define ss second
int main()
{
    int n; cin>>n;
    vector<ii> v(n);
    int x; cin>>x;
    v[0].ff=x; v[0].ss=1;
    for (int i=1;i<n;i++)
    {
        int y; cin>>y;
        
        v[i].ff=y; if (y>=v[i-1].ff) {v[i].ss=v[i-1].ss+1;}
        else if (y<v[i-1].ff) {v[i].ss=1;}
    }
    for (int i=0;i<n;i++)
    {
        cout<<"Index: "<<i+1<<" span is:  "<<v[i].ss;
        cout<<endl;
    }
    return(0);


}


//make pair etc...