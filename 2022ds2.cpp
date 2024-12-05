#include <bits/stdc++.h>
using namespace std;







/*bool q(int n) {
    if (n==1||n==2||n==3) {return true;}
    if (n%2==0 || n%3==0) {return false;}
    for (int i=5; i*i<=n; i++)
    {
        if (n%2==0 || n%(i+2)==0)
        {return false;}
    }
    return true;
}*/
int main(){
    int max=5e6+10;
    int root=floor(sqrt(max));
    vector<bool> q(max+10,true);
    q[0]=false;
    q[1]=false;
    for (int i=2;i<=max;i++)
    {   if (i>2 and i%2==0) {q[i]==false; continue;}
        if (q[i] && i<=root+10 )
        for (int j=i*i; j<=max; j+=i)
        {
            q[j]=false;
        }
    }



    int T;
    cin>>T;
    for (int l=0;l<T;l++)
    {
    int n;
    cin>>n;
    int t;
    int win;

    for (int i=0; i<n; i++)
    {
        int a; cin>>a;
        if (a%4==0) {t=-a/4;}
        else 
        {
            for (int x=0; (a-4*x)>=0; x++)
            {
                if (q[a-4*x]==true) {t=x+1; break;}
            }
        }
        if (i==0) {win=t;}
        else if (i>0) {if (abs(t)<abs(win)) {win=t;}}


    }
    
    if (win<=0) {cout<<"Farmer Nhoj"<<endl;}
    else {cout<<"Farmer John"<<endl;}
    }
}