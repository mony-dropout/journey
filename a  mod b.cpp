#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Calculate a mod b, enter a and be respectively \n";
    cin>>a>>b;
    cout<<"This is what c++ thinks a mod b is: "<<a%b<<endl;
    cout<<"This is what a mod b actually is: "<<(a%b+abs(b))%b<<endl;
    return(0);

}