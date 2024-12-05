#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p[i]=x;
    }
    int pb=0;
    int pe=n-1;
    for (int i=1;i<n;i++)
    {
        if (p[pb]>p[pe]) {cout<<p[pb+1]<<" "; pb++;}
        else {cout<<p[pe-1]<<" "; pe--;}
    }

    return(0);

}

//this is code for checking