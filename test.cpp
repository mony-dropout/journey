//keep going man
#include <bits/stdc++.h>
using namespace std; //x is the sorted thing...
/*void unify(vector<int> &x,const vector<int> &y) { 
    for (int z: y)  //for each element z of y
    {
        if (lower_bound(x.begin(),x.end(),z)==upper_bound(x.begin(),x.end(),z)) //check that z is not in y
        {
            auto ptr=lower_bound(x.begin(),x.end(),z); 
            if (ptr==x.end()){x.push_back(z);}  //if z if bigger than every element of x, add it to the end of x,
            else {
                x.push_back(x[x.size()-1]);  //else, increase the size of x by 1, and copy the last element of x there
                for (auto p=x.end()-2; p>=ptr+1; p--)  //if we insert z at ptr, everything after ptr will have their index increased by 1
                {
                    
                    *p=*(p-1);   //this is copies x[i] to x[i+1] till i is equal to ptr
                }
                *ptr=z; //adds z to ptr
            }
        }

    }
}*/

void unify(vector<int> &x, const vector<int> &y) { 
    for (int z : y) {
        if (binary_search(x.begin(), x.end(), z)) {
            continue;  // Element z already exists in vector x
        } else {
            // Insert z into vector x at the appropriate position to maintain sorted order
            auto it = upper_bound(x.begin(), x.end(), z);
            x.insert(it, z);
        }
    }
}
long long choose(int n){
    return static_cast<long long> (n) * (n-1) /2;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> s(1000001);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<5;j++)
        {
            int x; cin>>x;
            s[x].push_back(i);
        }
    }
    vector<int> a;
    long long common=0;
    for (int i=1; i<1000002; i++)
    {
        
        int p=a.size();
        common+=choose(s[i].size());
        unify(a,s[i]);
        int intersect=p+s[i].size() - a.size();
        //cout<<s[i].size()<<" "<<p<<" "<<a.size()<<endl;
        common-=choose(intersect); 
    }
    
    cout<<choose(n)-common;
    return(0);

    
   


}