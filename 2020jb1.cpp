#include <bits/stdc++.h>
using namespace std;
#include <fstream>
int main(){
    ifstream cin("word.in");
    ofstream cout("word.out");
   int n, k;
   cin>>n>>k;
   vector<string> v(n);
   for (int i=0;i<n;i++)
   {
    string s;
    cin>>s;
    v[i]=s;
}
int words=0;
for (int i=0; i<n; i++)
{

    if (words+v[i].length()<=k)
    {if (words==0) {}
    else { cout<<" ";}
    cout<<v[i];
    words+=v[i].length();}
    else 
    {
        words=0; 
        cout<<endl;
        cout<<v[i];
        words+=v[i].length();

    }
   ; 
}
cin.close();
cout.close();
return(0);

}