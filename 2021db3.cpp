#include <bits/stdc++.h>
using namespace std;
int f(int n) {return floor(n/2);}
//int bins(vector<int> v, int& a, int& b, int x)
/*{
    
if (x>v[f(a+b)]) {a=f(a+b)+1; bins(v,a,b,x);}
}//*/
int bro(int& x) {if (x%2==0) {return x;} else {bro(x-1);}}

int main(){
int n;
cin>>n;
cout<<bro(n);
return(0);
}