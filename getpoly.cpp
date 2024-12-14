#include <bits/stdc++.h>
using namespace std;
int n;
void getpoly(vector<int> &p) //thisll modify the storage poly vector
{
    for (int i=0;i<=n;i++)
    {
        int x; cin>>x;
        p.push_back(x); //this is interesting, which is faster, pushing back, or initilaising as zero and then assigning new vals, i guess pushing back cuz 
        //initialising presumably takes time
    }
}
//this works