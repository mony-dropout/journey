#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
vector<vi> S; //S[n][k] S(n,k)
//handle base cases in int main; initialise everything as -1
int stir(int n,int k)
{   if (k>n) {return 0;}
    if (S[n][k]!=0) {return S[n][k];}
    else  {S[n][k]=S[n-1][k-1]+k*S[n-1][k] ; return S[n][k];}

}
int main()
{
    int n; cin>>n;
    S.resize(n+1,vi(n+1,0));
    for (int i=0;i<n+1;i++)
    {
        S[i][0]=0;
        S[i][1]=1;
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<stir(i,j)<<" ";
        }
        cout<<endl;
    }
    return(0);
}