#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin>>n>>q;
    vector<int> c(n);
    for (int i=0;i<n;i++)
    {
        char x; cin>>x;
        c[i]=x-64;
    }
    vector<int> f(n,0); //f[i] is number of ways to paint from 0 to i; (inclusive)
    f[0]=1;
    for (int i=1;i<n;i++)
    {
        f[i]=f[i-1];
        if (c[i]==c[i-1]) {continue;}
        
        
        for (int j=i-1; j>=0; j--)
        {
            if (c[j]<c[i]) {f[i]++; break;}

            else if (c[j]==c[i]) {break;}  //
             //since then all intermediate stuff is bigger than c[i], so no extra colour needed... //this is wrong, is c[i] is unique, you gotta add 1...
            if (j==0) {f[i]++;} 
        } ;  //this finds the first occurence, i want the last occurence...

        
        
        
        
    }



    reverse(c.begin(),c.end());
    vector<int> b(n,0); //b[i] is number of ways to paint from n-1-i to n-1; (inclusive)
    b[0]=1;
    for (int i=1;i<n;i++)
    {
        b[i]=b[i-1];
        if (c[i]==c[i-1]) {continue;}
        
        
        for (int j=i-1; j>=0; j--)
        {
            if (c[j]<c[i]) {b[i]++; break;}

            else if (c[j]==c[i]) {break;}  //since then all intermediate stuff is bigger than c[i], so no extra colour needed...
            if (j==0) {b[i]++;}
        } ;  //this finds the first occurence, i want the last occurence...

        
        
        
        
    }
    
   
    
   for (int p=0; p<q; p++)
   {
     int x; int y;
     cin>>x>>y;
     int ans=0;
     if (x==1) {}
     else ans+=f[x-2];
     if (y==n) {}
     else ans+=b[n-y-1];
     cout<<ans<<endl;
   }

   
    






    return(0);
}