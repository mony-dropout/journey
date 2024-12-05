#include <bits/stdc++.h> 
using namespace std; 
int main()
{   int t; cin>>t;
    for (int q=0;q<t;q++)
    {
    int n,d,l;
    cin>>n>>d>>l;
    int half=d/2;
    int a,b;
    if (l>2)
    {
    a=(n-1-d)/(l-2);
    b=(n-1-d)%(l-2);}
    int x=0;
    bool work=true;
    //if (l==1 && n==1 && d==1) {cout<<}
    //if (l==1) {work=false;}
    if (l==2 ) {work=false;}
    
    if (l>2)
    {
    if ((n-1-d) < (l-2)) {work=false;}
    //int a, b;
    //a=(n-1-d)/(l-2);
    //b=(n-1-d)%(l-2);
    //int x=0; 
    if (b>0) {x=1;}
    //int half= d/2;
    if (a+x>half) {work=false;}
    }
    
    if (work==false) {cout<<-1<<endl;}
    else
    {   int hl=half+(d%2);
        int cur=1;
        for (int i=2;i<=1+hl;i++)
        {
            cout<<i<<" "<<i-1;
            cout<<endl;
            
        }
        cur=1+hl;
        for (int i=cur+half; i>=cur+1; i--) 
        {   if (i==cur+1) {cout<<cur+1<<" "<<1<<endl;}
        else{
            cout<<i<<" "<<i-1<<endl;}
        }
        cur=d+1;
        for (int i=0;i<b;i++)
        {
            for (int j=a+1;j>0;j--)
            {
                if (j==1) {cout<<cur+1<<" "<<1<<endl;}
                else {cout<<cur+j<<" "<<cur+j-1<<endl;}

            }
            cur=cur+a+1;
        }
        for (int i=0;i<l-b-2;i++)
        {
            for (int j=a;j>0;j--)
            {
                if (j==1) {cout<<cur+1<<" "<<1<<endl;}
                else {cout<<cur+j<<" "<<cur+j-1<<endl;}
            }
            cur+=a;
        }
        
    }
    
    }
    return(0);

}