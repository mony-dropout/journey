#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m;
    cin>>n>>m;
    vector <vector<int>> e(m,vector<int>(2,0)); //e0,e1,e2.....e(m-1) are edges.
    for (int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;
        e[i][0]=min(a,b);
        e[i][1]=max(a,b);
    }
    //each edge is of form {a,b} and a<b;
    //starting to find connected component of 1 and n
vector <int> s1 ={1};

int a=0;
int b=1;
while (b!=a) 
{a=s1.size();
for (int x:s1) 
 {  //a=s1.size();
    for (int i=0; i<m; i++) 
        {   
            if (e[i][0]==x && find(s1.begin(),s1.end(),e[i][1])==s1.end()) {s1.push_back(e[i][1]);} 
            else if (e[i][1]==x && find(s1.begin(),s1.end(),e[i][0])==s1.end()) {s1.push_back(e[i][0]);}
        }
    //b=s1.size();    
 }
 b=s1.size();
}

vector <int> sn={n};
int c=0;
int d=1;
while (c!=d)
{   c=sn.size();
    for (int x:sn)
    { 
        
        for (int i=0;i<m;i++)
        {
            if (e[i][0]==x && find(sn.begin(),sn.end(),e[i][1])==sn.end()){sn.push_back(e[i][1]);}
            else if (e[i][1]==x && find(sn.begin(),sn.end(),e[i][0])==sn.end()) {sn.push_back(e[i][0]);}
        }
        
    }
    d=sn.size();
}
cout<<endl;
cout<<"Connected componenet of 1 is"<<endl;
for (int x:s1) {cout<<x<<", ";}
cout<<endl;
cout<<"Connected component of n is"<<endl;
for (int x:sn) {cout<<x<<", ";}
cout<<endl;
}
/*
5 3
1 2
2 3
3 4
4 5
*/





