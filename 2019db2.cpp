#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    vector <char> v(n,'0');
    for (int i=0;i<n;i++){v[i]=s[i];}
    
    
   
   for (int i = 0; i < n - 3; i++) {
    for (int j = i + 1; j < n - 3; j++) {
        if (equal(v.begin() + i, v.begin() + i + 3, v.begin() + j)) {
            cout << "Found repeated substring of length 3 starting at index " << i << endl;
        }
    }
}

   
  
    return(0);
}   

//if (equal(v.begin(),v.begin()+3,v.begin()+4)==true) {cout<<"good";} else {cout<<"bad";}

    
   /*for (int i=0; i<n-3; i++)
   {for (int j=i+1; j<n-3; j++)
   {
    if (equal(v.begin()+i,v.end()+i+3,v.begin()+j)==true) {cout<<i<<endl;}
   }
   }*/