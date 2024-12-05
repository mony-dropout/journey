#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<double> v={3.3,2,4,2,5.2};
    double s=0;
    for(double i:v){
        s=s+i;
    }
    cout<<"Average value is "<<s/v.size()<<endl;
    sort(v.begin(), v.end());
    cout<<"Median is "<<v[ v.size() / 2]<<endl;
    return(0);


}