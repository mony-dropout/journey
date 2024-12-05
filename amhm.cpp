#include <bits/stdc++.h>
using namespace std;
int main()
{
    ///3, a , b, c, 6 are in hp... 1/3=x; 1/a=x+y, 1/b; x+2y; 1/c= x+3y; 1/6=x+4y; 
    for (int i=0;i<=4;i++)
    {
        double t= 1/3.0000 - i/24.0000;
        cout<<1/t<<endl;
    }
    return(0);
}