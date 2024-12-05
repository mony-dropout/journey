#include <bits/stdc++.h>
using namespace std;
void unify(vector<int> &x, const vector<int> &y)
{
    for (int z: y)
    {
        if (binary_search(x.begin(),x.end(),z)==true) {continue;}
        else {
            auto ptr=lower_bound(x.begin(),x.end(),z);
            x.insert(ptr, z);
        }
    }
}
int main(){
    vector<int> x={1,2,3,4,5};

    vector<int> y={1,10};
    int x0=x.size();
    unify(x,y);
    int intersect=y.size()+x0-x.size();
    cout<<intersect;

    
    return(0);
}