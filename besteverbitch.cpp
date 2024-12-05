#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;
bool q(int n) {
    if (n==1||n==2||n==3) {return true;}
    if (n%2==0 || n%3==0) {return false;}
    for (int i=5; i*i<=n; i++)
    {
        if (n%2==0 || n%(i+2)==0)
        {return false;}
    }
    return true;
}

int main() {
    
    for (int i=0;i<13;i++)
    {
    int a; cin>>a;
        if (a%4==0) {cout<<-a/4;}
        else 
        {
            for (int x=0; x<a; x++)
            {
                if (q(a-4*x)==true) {cout<<x+1; break;}
            }
        }
        cout<<endl;
    }
    
    return 0;
}

