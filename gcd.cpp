//this is the gcd calculator

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the two numbers \n";
    cin>>a>>b;
    int x=max(abs(a),abs(b));
    int y=min(abs(a),abs(b));
    int gcd;
    int r=1;
    while (r!=0)
    {
        r=x-y*floor(x/y);
        gcd=y;
        x=y;
        y=r;
    }
    cout<< gcd;
    return(0);
    
}
//wow this is pretty cool huh...
//i dont care man, theres going to be no regrets for me now, i could have gotten perfect score at imo, but i didn't work hard
//here i know my potential, i know i can get gold at ioi... im going to do whatever it takes to get there now
//my way
//jee mains 300
//jee advanced air 1
//ioi gold