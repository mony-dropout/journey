#include <bits/stdc++.h>
using namespace std;
int bin(vector<int> v, int low, int high, int x) //binary searching between v[low] and v[high] for x...
{   
    if (low==high || low+1==high)  //added high=low+1
    {   
        if (x==v[low]) {return low;}
        if (x==v[high]) {return high;}
        else {return -1;}
    }
    int mid=low + (high-low)/2;
    if (x>v[mid]) {return bin(v,mid,high,x);}
    if (x<v[mid]) {return bin(v,low,mid,x);}
    if (x==v[mid]) {return mid;}
    

}
int main()
{
    vector<int> v={1,3,5,7,9,11,13,15};
    for (int x=0;x<17;x++)
    {
    int find=bin(v,0,7,x);
    cout<<x<<" found at ";
    if (find==-1) {cout<<find;}
    else {cout<<find+1;}
    cout<<endl;
    }

    return(0);
}