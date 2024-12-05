#include <bits/stdc++.h>
using namespace std;
#include <fstream>;
int main(){
ifstream cin("cowpatibility.in");
ofstream cout("cowpatibility.out");
int n;
cin>>n;
int ans=(n*(n-1))/2.0;
vector<vector<int>> c(n,vector<int>(5,0));
for (int i=0;i<n;i++)
{
    for (int j=0;j<5;j++){
        int x; cin>>x; c[i][j]=x;
    }
}
for (int i=0; i<n; i++)
{
    for (int j=i+1; j<n; j++)
    {
        for (int p=0;p<5;p++){
            if (find(c[j].begin(),c[j].end(),c[i][p])!=c[j].end()) {ans--; break;}
        }
    }
}
cout<<ans;
cin.close();
cout.close();
return(0);
}



