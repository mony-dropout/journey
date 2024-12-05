#include <bits/stdc++.h>
using namespace std;
#include <fstream>
int main(){
    ifstream cin("sleepy.in");
    ofstream cout("sleepy.out");
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++){int x;cin>>x;a[i]=x;}
    int last=n-1;
    for (int i=n-2; i>=0; i--)
    {
        if (a[i+1]<a[i])
        {
            last=i;
            break;
        }
    }
    cout<<last+1<<endl; //minimum steps
    vector<int> b;
    for (int k=last+1;k<n;k++)
    {
        b.push_back(a[k]);
    }
    for (int j=0; j<=last; j++){
        auto ptr=lower_bound(b.begin(),b.end(),a[j]);
        cout<<last-j+ (ptr-b.begin());
        if (j!=last) {cout<<" ";}
        b.insert(ptr,a[j]);
    }
    cin.close();
    cout.close();
    return(0);
}