//i can literally achieve anything
//i am going to enjoy my life and do the most satisfying thing, work all day alone in my room, i dont care about nothing else
//best ever
//ioi gold


#include <bits/stdc++.h>
using namespace std;
bool p(int a, int b) 
{
    if ((a-b)%5 == 0) {return (a<b);}
    return (a%5 < b%5);
}
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};
    sort(v.begin(),v.end(),p);
    for (int x:v) {cout<<x<<" ";}
    return(0);
}