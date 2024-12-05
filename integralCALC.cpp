/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cout<<"Welcome to the integral calculator, calculate the integral of x^n from 0 to 1.... what is n?"<<endl;
    cin>>n;
    double t;
    cout<<"How much precision do you want?(higher this number, higher the precision)"<<endl;
    cin>>t;
    double x=0;
    double s=0;
    while (x<=1) {s=s+pow(x,n) * 1/t ; x=x+ 1.0/t;}
    cout<<"the calculated value of the integral is "<<fixed<<setprecision(10)<<s<<endl;
    cout<<"Error is "<<fixed<<setprecision(10)<<abs(1-(n+1)*s)*100<<" %";
    return(0);
    
}