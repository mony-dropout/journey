#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int x=2;x<=4;x++)
    {
        for (int y=x;(x-1)*(y-1)<14;y++)
        {
            if (pow(x*y-7,2)==x*x+y*y) {cout<<x<<" "<<y<<endl;}
        }
    }
    return(0);
}