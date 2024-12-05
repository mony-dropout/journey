//first line is T;
#include <bits/stdc++.h>
using namespace std;
int main(){
    //#define int long long
    int T; cin>>T;
    for (int q=0;q<T;q++)
    {
    int n; cin>>n;
    vector<int> h(n-1);
    vector<int> times(n+1,0); //number of times i occurs in h is times[i]; times[0]=-1 if any non 1 i occurs twice, you're done...
    times[0]=-1;
    for (int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        h[i]=x;
        times[x]++;
    }
    int u=count(times.begin()+2,times.end(),1);
    
    
    //till here is correct
    vector<int> p(n,0);
    
    if (h[n-2]==1 && u==n-2 && times[1]==1)   //this is a possible case
    {  //long long sum=static_cast<long long> (n) * (n+1) / 2;
        for (int i=0;i<n-1;i++)
        {
            p[i]=h[n-2-i];
            //sum-=p[i];
        }
        auto ptr=find(times.begin(),times.end(),0);
    p[n-1]=ptr-times.begin();
        //p[n-1]=sum;

        for (int l=0;l<n;l++) {cout<<p[l]; if (l!=n-1) cout<<" ";}
    }

    else if (times[1]==2 && u==n-3 && h[n-2]==1)  //this is a possible case, 1 is an endpoint...
    {   
        auto first=find(times.begin(),times.end(),0);
        int a=first-times.begin();
        auto last=find(first+1, times.end(), 0);
        int b=last-times.begin();
        p[0]=min(a,b);
        p[n-1]=max(a,b);
        int x=0; int y=n-1;
        for (int i=0; i<n-1; i++)
        {   
            
            if (p[x]<p[y]) {p[y-1]=h[i]; y--;}
            else if (p[x]>p[y]) {p[x+1]=h[i]; x++;}
            //if (p[x]==p[y]) {break;}
        }
        for (int l=0;l<n;l++) {cout<<p[l]; if (l!=n-1) cout<<" ";}

    }
    else {cout<<-1;}
    if (q!=T-1) {cout<<endl;}
    }
    
    return(0);
}