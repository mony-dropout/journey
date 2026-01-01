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
int T(int a, int b, vii v)
{
    if (a<b)
    {
        return accumulate(v[b].begin(),v[b].begin()+a+1,0);
    }
    else return accumulate(v[b].begin(),v[b].end(),0);
}
int main()
{
    int N; cin>>N;
    vector<vector<int>> v;
    for (int n=0;n<=N;n++)
    {
        v.push_back(fillvals(n));
    }
    
    //double exp=0;
    /*for (int i=0;i<=n;i++)
    {
        cout<<"no of streaks is "<<i<<" : "<<v[i]<<endl;
        exp+=(i)*v[i];
    }*/
    /*exp/=pow(2,n);
    cout<<"expected value is "<<exp<<endl;
    cout<<pow(2,exp)<<endl;*/
    int n;
    while( cin>>n)
    {
    int sum=0;
    for (int f=0;f<n;f++)
    {
        sum+=T(f,n-f-1,v);
    }
    cout<<sum<<endl;}
    return(0);
}
    