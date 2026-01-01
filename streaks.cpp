#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
string genbin(int n)
{
    string s;
    while (n>0)
    {   int r=n%2;
        if (r==1) {s+='1';}
        else {s+='0';}
        n=(n-n%2)/2;
    }
    return s;
}
vi fillvals(int n)
{   //v is the like v[k] is no. of things with maxstreak k;
    //n bit thing
    int m=pow(2,n);
    vi v(n+1,0);
    for (int i=0;i<m;i++)
    {   int maxstreak=0;
        int curstreak=0;
        string s=genbin(i);
        //cout<<s<<endl;
        for (int j=0;j<s.length();j++)
        {
            if (s[j]=='1') {curstreak++; maxstreak=max(curstreak,maxstreak);}
            else { 
            maxstreak=max(curstreak,maxstreak);
            curstreak=0;
                }
                
        }
        v[maxstreak]++;
    }
    return v;
}
int main()
{
    int n; cin>>n;
    vi v=fillvals(n);
    double exp=0;
    double m=pow(2,n);
    for (int i=0;i<=n;i++)
    {
        exp+=(v[i]*i)/m ; 
    }
    cout<<exp<<endl;
return(0);
}