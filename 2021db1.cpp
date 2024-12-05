#include <bits/stdc++.h>
using namespace std;
//long long f(int n) {long long z=2; z=(z*n)*(n-1); return(z/4 -(n-1));} //how to multiply ints which may go to ll is something you gotta learn
long long g(int a, int b) {return ((a>0)?(a-1):0) + ((b>0)?(b-1):0)+static_cast<long long>(a)*b;}
int main(){
int n; cin>>n;
string s;
cin>>s;
long long ans=0;
vector<vector<int>> v(n,vector<int>(2,0)); //v[i]={i,1/0}
int countH,countG; 
countH=0;
countG=0;


for (int i=0;i<n;i++)
{
    v[i][0]=i;
    v[i][1]=s[i]-'G';
    if (s[i]=='G') {countG++;}
    else {countH++;}
    
}
if (countH*countG==0){ ans=0;}
else{

stable_sort(v.begin(),v.end(),[=](vector<int>a,vector<int>b){return a[1]<b[1];});
for (int i=0;i<countG;i++)
{
    if (countG==1) {int a=v[0][0]-0; int b=n-1-v[0][0]; ans+=g(a,b);}
    else{
    if (i==0){int a=v[0][0]-0; int b=v[1][0]-v[0][0]-1;ans+=g(a,b);}
    else if (i==countG-1) {int a=v[i][0]-v[i-1][0]-1; int b=n-1 - v[i][0]; ans+=g(a,b);}
    else{
        int a=v[i][0]-v[i-1][0]-1;
        int b=v[i+1][0]-v[i][0]-1;
        ans+=g(a,b);
    }
    }
}

for (int i=countG;i<n;i++)
{   if (countH==1) {int a=v[i][0]-0; int b=n-1-v[i][0]; ans+=g(a,b);}
else{
    if (i==countG){int a=v[i][0]-0; int b=v[i+1][0]-v[i][0]-1;ans+=g(a,b);}
    else if (i==n-1) {int a=v[i][0]-v[i-1][0]-1; int b=n-1 - v[i][0]; ans+=g(a,b);}
    else{
        int a=v[i][0]-v[i-1][0]-1;
        int b=v[i+1][0]-v[i][0]-1;
        ans+=g(a,b);
    }
}
}
}

//cout<<ans;*/
//cout<<countG<<" "<<countH<<endl;
/*for (int i=0;i<n;i++)
{cout<<v[i][0];}*/
//cout<<3*g(1,1)+g(0,1)+g(1,0);
cout<<ans;

return(0);
}