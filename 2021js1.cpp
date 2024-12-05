#include <bits/stdc++.h>
using namespace std;
int main(){
    //count by position
    //create a vector matrix, n*n ; where nth vector is set of numbers that appear at ith position
    //create cp[i] vector, current occupant of ith position
    //if i x occurs, p1[i]=p1[i]+cp(x)
    //create two k dimenstional vectors, for storing the swaps
    //if cp(x)={1,2,...}; stop.
    int n  ,k;
    cin>>n>>k;
    
    vector<vector<int>> pos(n);
    vector<int> a(k,-2); vector<int> b(k,-2);
    for (int i=0; i<k;i++) {int x,y; cin>>x>>y; a[i]=x-1; b[i]=y-1;}
    vector<int> cp(n,0);
    for(int i=0;i<n;i++) {cp[i]=i;} //current position vector

    for (int i=0;i<n;i++) //initialise pos[i]
    {
      pos[i].push_back(i);
    }
    vector<int> originalpos(n,0);
    for(int i=0;i<n;i++){originalpos[i]=i;} //pos(i)=i, to check when to end loop

    do
    {
         for (int s=0; s<k;s++) //swapping begins
    {
        
        //p[a]=p[a]+cp(b) if cp(b) not in p[a]
        /*if (find(pos[a[s]].begin(),pos[a[s]].end,cp[b[s]])==pos[a[s]].end())*/ {pos[a[s]].push_back(cp[b[s]]);}
        /*if (find(pos[b[s]].begin(),pos[b[s]].end,cp[a[s]])==pos[b[s]].end())*/ {pos[b[s]].push_back(cp[a[s]]);}
        cp[a[s]]=b[s];
        cp[b[s]]=a[s];

    }
    } while (equal(cp.begin(),cp.end(),originalpos.begin())==false);
    //calculating final answer, if j ever occurs at ith position
    for (int j=0;j<n;j++)
    {
        int ans=0; 
        for (int i=0;i<n;i++)
        {
            if (find(pos[i].begin(),pos[i].end(),j)!=pos[i].end()) {ans+=1;}
        }
        cout<<ans<<endl;
    }


   

//never give up


}