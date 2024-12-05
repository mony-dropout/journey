#include <bits/stdc++.h>
using namespace std;
int main(){
    #define double long double
    double ans; cin>>ans;
 double a=ans;
vector<int> k(8);
for (int i=0;i<8;i++)
{k[i]=floor(a); a-=floor(a); a*=10;}
if (k[7]>5) {a=ans+0.000001;} else if (k[7]<5) {a=ans;}
else if (k[7]==5) {a=ans+((k[6]%2)*0.000001);}
for (int i=0;i<7;i++)
{k[i]=floor(a); a-=floor(a); a*=10;}
for (int i=0;i<7;i++)
{cout<<k[i];
if (i==0) {cout<<'.';}}
}