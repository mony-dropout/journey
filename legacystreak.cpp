#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
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
{
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
    int n; cin>>n; //n bit thing
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
    double exp=0;
    for (int i=0;i<=n;i++)
    {
        cout<<"no of streaks is "<<i<<" : "<<v[i]<<endl;
        exp+=(i)*v[i];
    }
    exp/=pow(2,n);
    cout<<"expected value is "<<exp<<endl;
    return(0);
}
    