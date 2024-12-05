/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double s=1;
    int i=1;
    while (i<n+1) {s=s+pow(-1,i)*(1.0000)/(2*i+1); i++;}
    cout <<"Approx value of pi is " <<fixed << setprecision(10) <<4*s<<endl;
    cout<<"Error is "<<abs((3.1415926536 - 4*s)/(3.1415926535))*100<<" "<<'%';
    
    return(0);
    
}