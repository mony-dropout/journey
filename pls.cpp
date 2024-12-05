#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    cin>>a;
    cout<<s+a;
    cout<<s-a;
    return(0);
}
//-3 0 2 3 5
/// x0 x1 .. xi .. xn
/*
xi-x0 + xi-x1+.. xi-xi ((i+1)*xi -si)
+ 
xi+1-xi+ .. xn-1-xi (s(n-1) - si -(n-1-i)*xi)
s(n-1) - 2*s(i) -xi*(n-2-2*i)


*/