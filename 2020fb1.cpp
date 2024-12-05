#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
#include <fstream>
int main(){
    #define int long long
    int lm=1e9+7;
    ifstream cin("triangles.in");
    ofstream cout("triangles.out");
    int n;
    cin>>n;
    vi dx;
    vi dy;
    vector<vi> p(n,vi(2)); //p[i][0] is x coord, p[i][1] is y coord...
    for (int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        p[i][0]=x;
        p[i][1]=y;
        if (find(dx.begin(),dx.end(),x)==dx.end()) {dx.push_back(x);}
        if (find(dy.begin(),dy.end(),y)==dy.end()) {dy.push_back(y);}
    }
    sort (p.begin(),p.end(),[=] (vi a, vi b) {if (a[0]==b[0]) {return a[1]<b[1];} else {return a[0]<b[0];} }); //sorted by x, and each x by y...
    sort(dx.begin(),dx.end());
    sort(dy.begin(),dy.end());
    vector<vi> rofyforx(dx.size(),vi(2)); 
    vector<int> p1(n);
    for (int i=0;i<n;i++)
    {
        p1[i]=p[i][0];
    }
    for (int i=0;i<dx.size();i++)
    {
        auto ptr1=lower_bound(p1.begin(),p1.end(), dx[i]); //this is weird
        auto ptr2=upper_bound(p1.begin(),p1.end(),dx[i]);
        ptr2--;
        rofyforx[i][0]=p[ptr1-p1.begin()][1];
        rofyforx[i][1]=p[ptr2-p1.begin()][1];
    }
    
    sort(p.begin(),p.end(),[=](vi a, vi b) {if (a[1]==b[1]) {return a[0]<b[0];} else {return a[1]<b[1];}}); //lower bound and vector of vector?
    vector<vi> rofxfory(dy.size(),vi(2));
    
    for (int i=0;i<n;i++)
    {
        p1[i]=p[i][1];
    }
    for (int i=0;i<dy.size();i++)
    {
        auto ptr1=lower_bound(p1.begin(),p1.end(),dy[i]);
        auto ptr2=upper_bound(p1.begin(),p1.end(),dy[i]);
        ptr2--;
        rofxfory[i][0]=p[ptr1-p1.begin()][0];
        rofxfory[i][1]=p[ptr2-p1.begin()][0];
    }
    int ans=0;
    for (int i=0;i<n;i++)
    {   int x,y;
        x=p[i][0];
        y=p[i][1];
        int q=lower_bound(dx.begin(),dx.end(),x)-dx.begin();
        int w=lower_bound(dy.begin(),dy.end(),y)-dy.begin();
        int h=max(rofyforx[q][1]-y,y-rofyforx[q][0]);
        int b=max(rofxfory[w][1]-x,x-rofxfory[w][0]);
        ans=max(ans,h*b);


    }
    cout<<ans;
    cin.close();
    cout.close();

    //O(nlogn)
    //let's speedrun brute force
    /*ifstream cin("triangles.in");
    ofstream cout("triangles.out");

    int n; cin>>n;
    vector<int> x(n);
    vi y(n);
    for (int i=0;i<n;i++)
    {
        int o,p;
        cin>>o>>p;
        x[i]=o;
        y[i]=p;
    }
    int ans=0;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for (int k=0;k<n;k++)
            {
                if (x[i]==x[j] && y[i]==y[k]) 
                {
                    ans=max(ans,abs((y[i]-y[j])*(x[i]-x[k])));
                }
            }
        }
    }
    
    cin.close();
    cout.close();*/
    return(0);

}

