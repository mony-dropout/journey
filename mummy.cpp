#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<double> x;
    vector<double> y;
    double xbar=0;
    double ybar=0;
    for (int i=0;i<24;i++)
    {   double a,b;
        cin>>a>>b;
        x.push_back(a); y.push_back(b);
        xbar+=a/24.00;
        ybar+=b/24.00;
    }
    double top=0;
    double xqr=0;
    double yqr=0;
    for (int i=0;i<24;i++)
    {
        x[i]=x[i]-xbar;
        y[i]=y[i]-ybar;
        top+=x[i]*y[i];
        xqr+=x[i]*x[i];
        yqr+=y[i]*y[i];
    }
    xqr=sqrt(xqr);
    yqr=sqrt(yqr);
    double r;
    r=top/(xqr*yqr);
    cout<<r<<endl;


    
}