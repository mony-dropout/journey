# include <bits/stdc++.h>

#include<fstream> 
using namespace std;
int main(){
    ifstream cin("mixmilk.in");
ofstream cout("mixmilk.out"); //if you wanna do the file thingy 
int c1, a, c2, b, c3, c;
    cin >> c1 >> a >> c2 >> b >> c3 >> c;  
    int x,y,z;
    x=a;y=b;z=c;

    for (int i = 1; i <= 33; i++) {
        x=a;y=b;z=c;
        if (a+b<=c2) {a=0;b=b+x; }  else {b=c2;a=a-(c2-y);} //this confirms that we get the thing we wanted, not a=a-(c2-c2) which would be stupid....
        x=a;y=b;z=c;
        if (b+c<=c3) {  b=0;c=c+y;} else {c=c3; b=b-(c3-z);}
        x=a;y=b;z=c;
        if (c+a<=c1) { c=0;a=a+z;} else{a=c1; c=c-(c1-x);}
        x=a;y=b;z=c;

       //if they dont, then we break.
        
        
    }

    x=a;y=b;z=c;
        if (a+b<=c2) {a=0;b=x+y; }  else {b=c2;a=x-(c2-y);}
    
    

    cout << a << endl << b << endl << c << endl;

cin.close();
cout.close();
return(0);
} 


/*# include <bits/stdc++.h>

#include<fstream> 
using namespace std;
int main(){
    ifstream cin("mixmilk.in");
ofstream cout("mixmilk.out"); //if you wanna do the file thingy 
int c1, a, c2, b, c3, c;
    cin >> c1 >> a >> c2 >> b >> c3 >> c;  
    int x,y,z;

    for (int i = 1; i <= 33; i++) {
        
        if (a+b<=c2) {b=a+b; a=0;}  else {a=a-(c2-b);b=c2;} //the problem is we're changing b to c2 before a=a-(c2-b)
        if (b+c<=c3) { c=b+c; b=0;} else {b=b-(c3-c);c=c3; }
        if (c+a<=c1) { a=a+c;c=0;} else{c=c-(c1-a);a=c1; }

       //if they dont, then we break.
        
        
    }
    if (a+b<=c2) {b=a+b; a=0;}  else {a=a-(c2-b);b=c2;}
    
    

    cout << a << endl << b << endl << c << endl;

cin.close();
cout.close();
return(0);
} */