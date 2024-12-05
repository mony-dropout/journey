//this is an interesting algortihmimc puzzle... calculate S+S ... 
#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    ifstream cin("backforth.in");
    ofstream cout("backforth.out");
    vector <int> a(10,0); vector <int> b(10,0);
    for (int i=0;i<10;i++) {int n; cin>>n; a[i]=n;}
    for (int i=0;i<10;i++) {int n; cin>>n; b[i]=n;}
    vector<int> a2;
    
    for (int i=0;i<10;i++)
    { 
        
        for (int j=0;j<10;j++)
        {
            if (j==i) {continue;}

            else 
            {auto ptr=find(a2.begin(),a2.end(),a[i]+a[j]);
            if (ptr==a2.end()) {a2.push_back(a[i]+a[j]);}}
        }
    }
    
    vector<int> b2;
    
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            if (j==i) {continue;}

            else 
            {auto ptr=find(b2.begin(),b2.end(),b[i]+b[j]);
            if (ptr==b2.end()) {b2.push_back(b[i]+b[j]);}}
        }
    }
    vector<int> s;
    s.push_back(0);

    for (int i=0; i<a2.size();i++) 
    {
        for (int j=0; j<b2.size();j++)
        {
          auto ptr= find(s.begin(),s.end(),a2[i]-b2[j]);
          if (ptr==s.end()) {s.push_back(a2[i]-b2[j]);}
        }
    }
    
    for (int i=0; i<10; i++) 
    {
        for (int j=0;j<10;j++)
        {
            auto ptr= find(s.begin(),s.end(),a[i]-b[j]);
            if (ptr==s.end()) {s.push_back(a[i]-b[j]);}
        }
    }
   
    
    cout<<s.size();
    cin.close();
    cout.close();

    return(0);

}

//the problem right now is we cant have a-b - b , so either it is a+a-b-b or it is a-b
//our problem right now is if there is only one element of 2, in a, then we can't get 2 for a two times...
/* for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            auto ptr=find(u.begin(),u.end(),a[i]-b[j]);
            if (ptr==u.end() || (count(a.begin(),a.end(),a[i])>1 && count(b.begin(),b.end(),b[j])>1))
            {u.push_back(a[i]-b[j]);}
        }
    }
    vector<int> s;
    int p=u.size();
    for (int i=0;i<p;i++)
    {
        for (int j=0;j<p;j++)
        {
            if (j==i) {continue;}
            auto ptr=find(s.begin(),s.end(),u[i]+u[j]);
            if (ptr==s.end()) {s.push_back(u[i]+u[j]);}
        }
    }
*/