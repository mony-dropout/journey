#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n; 
    while(cin>>n)
    {
    double k=0;
    double p=1; 
    while (p>0.5)
    {
        p*=(n-k)/n;
        k++;
    }
    double approx=sqrt(2*n*log(2))+1;
    cout<<"actual min value "<<k<<endl;
    cout<<"approx min value "<<approx<<endl;
    cout<<"error is "<<(approx-k)*100/k<<" % "<<endl;
    }
    return(0);
}