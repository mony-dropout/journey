#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<double> v={3,2,3,4,6};
    double s=0;
    for(int i:v)
    {
        s+=i;
    }
    cout<<"Average value is: "<<s/(5.00)<<endl;
    sort(v.begin(), v.end());
    cout<<"Median temperature is: "<<v[(v.size())/2]<<endl;
    return(0);
}