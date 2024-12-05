#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vector<int>>;
bool et(vi a, vi b)
{
    if (a[1]==b[1]) {return (a[0]<b[0]);}
    else{return (a[1]<b[1]);}
}
int main()
{
    vii v={{1, 4}, {2, 3}, {3, 5}, {0, 6}};


    sort(v.begin(),v.end(),et);
    for (vi a : v)
    {
        cout<<a[0]<<" "<<a[1]<<endl;
    }
    return(0);
}