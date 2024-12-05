// you can achieve all your dreams and be the best ever bruh, let's go all the way up

# include <bits/stdc++.h>
#include<fstream> 
using namespace std;
int main(){
/*ifstream cin("mixmilk.in");
ofstream cout("mixmilk.out");*/ //if you wanna do the file thingy
long long c1, a, c2, b, c3, c;
    cin >> c1 >> a >> c2 >> b >> c3 >> c;  
    long long x,y,z;

    for (int i = 1; i <= 33; i++) {
        x=a;y=b;z=c; //this checks to see if the values change upon one loop
        while (a > 0 && b < c2) { a--; b++; } 
        while (b > 0 && c < c3) { b--; c++; }
        while (c > 0 && a < c1) { c--; a++; }
        if (x==a && y==b && z==c) {break;}  //if they dont, then we break.
        
        
    }

    while (a > 0 && b < c2) { a--; b++; }

    cout << a << endl << b << endl << c << endl;

/*cin.close();
cout.close();*/
return(0);
}
