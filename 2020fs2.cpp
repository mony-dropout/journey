#include <bits/stdc++.h>
using namespace std;
//int dist(vector<int> v, int a) {} //this will tell you the distance from a to all other vertices of v; for all a in v...
using vi=vector<int>;
int mod=1e9+7;
#include <fstream>
int main(){
    ifstream cin("triangles.in");
    ofstream cout("triangles.out");
    int n;
    cin>>n;
    vector<vi> dx(2e5+10); // dx[i] is the things with x coordinate i-1e4... dx[i] contains all y coordinates of elements...
    vector<vi> dy(2e5 +10); //dy[i] is things with y coordinate i=1e4.... dy[i] contains all x coordinates of those points...
    vector<vi> p(n,vi(2)); //p[i] is ith points coordinate; p[i][0,1]= (xi,yi)
    for (int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        dx[x+1e4].push_back(y);
        dy[y+1e4].push_back(x);
        p[i][0] =x;
        p[i][1]=y;
    }
    for (int i=0; i<2e5+10; i++)
    {
        sort(dx[i].begin(),dx[i].end());
        sort(dy[i].begin(),dy[i].end());
    }
    vector<vi> sdx(2e5+10);
    vector<vi> sdy(2e5+10);
    for (int i=0;i<2e5+10;i++)
    {   int k=dx[i].size();
        if (dx[i].size()==0) {continue;}
        else 
        {   sdx[i].push_back(dx[i][0]);
            for (int j=1;j<k;j++)
            {
                sdx[i].push_back(sdx[i][j-1]+dx[i][j]);
            }
        }
    }
    for (int i=0;i<2e5+10;i++)
    {   int k=dy[i].size();
        if (dy[i].size()==0) {continue;}
        else 
        {   sdy[i].push_back(dy[i][0]);
            for (int j=1;j<k;j++)
            {
                sdy[i].push_back(sdy[i][j-1]+dy[i][j]);
            }
        }
    }
    long long ans=0;
    for (int t=0;t<n;t++)
    {
        int x=p[t][0];
        int y=p[t][1];
        auto ptr=find(dx[x+1e4].begin(),dx[x+1e4].end(),y);
        int i=ptr-dx[x+1e4].begin();
        int m=dx[x+1e4].size();
        int b=sdx[x+1e4][m-1]-m*y + 2*i*y + 2*y - 2*sdx[x+1e4][i];
        auto ptr1=find(dy[y+1e4].begin(),dy[y+1e4].end(),x);
        int i1=ptr1-dy[y+1e4].begin();
        int m1=dy[y+1e4].size();
        int h=sdy[y+1e4][m1-1]-m1*x + 2 * i1 * x + 2*x - 2*sdy[y+1e4][i1];
        ans+=static_cast<long long> (b) *h;
        ans %= mod;
    }
    //O(nlogn)
cout<<ans;
cin.close();
cout.close();

}