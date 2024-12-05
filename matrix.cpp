#include <bits/stdc++.h>
using namespace std; 
void mm(int n, vector<vector<int>> a, vector<vector<int>> b, vector<vector<int>> &c) //order, A, B, C=AB... //yuh this is where & is used
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            c[i][j]=0;
            for (int k=0;k<n;k++) {c[i][j]+=(a[i][k])*(b[k][j]);}
            
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int> (n)),b(n,vector<int> (n)),c(n,vector<int> (n));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            {
                int x; cin>>x; a[i][j]=x;
            }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            {
                int x; cin>>x; b[i][j]=x;
            }
    }

    mm(n,a,b,c);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return(0);
}