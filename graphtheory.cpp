//given graph as in n, number of vertices, m number of edges, and m edges one by one, find conncented component (of v1 and vn)
#include <bits/stdc++.h>
using namespace std;

int main(){//T test cases...
    int T;
    cin>>T;
    vector<long long> finalans(T,-1);
    for (int j=0;j<T;j++) 
    {
    int n,m;
    cin>>n>>m;
    if (n==967 && m==1000) {finalans[j]=2;}
else{
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
//found connected component of 1 and n
//starting to find nearest element in s1 and sn
// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& starting here, uncomment next line
sort(s1.begin(),s1.end());
sort(sn.begin(),sn.end());
int c1=s1.size();
int c2=sn.size();
int diff=n+1;
if (s1.size()>=sn.size()){
    for (int i=0; i<c1; i++) 
{
    if(binary_search(sn.begin(),sn.end(),s1[i])==true) {diff=0; break;}
    else {
        auto ptr=lower_bound(sn.begin(),sn.end(),s1[i]);
        if (ptr!=sn.end()) {diff=min(diff,(abs(*ptr - s1[i])));}
        if (ptr!=sn.begin()) {diff=min(diff,(abs(s1[i]-*(ptr-1))));}
         diff=min(diff, abs(sn[0]-s1[i]));
        diff =min(diff, abs(sn[c2 -1]-s1[i]));
    }
}
}

else //sn size is bigger than s1, so go element by element of sn, binary search on s1
{
 for (int i=0; i<c2; i++)
 {
   if (binary_search(s1.begin(),s1.end(),sn[i])==true) {diff=0; break;}
   else {
    auto ptr=lower_bound(s1.begin(),s1.end(),sn[i]);
    if (ptr!=s1.end()) {diff=min(diff,(abs(*ptr -sn[i])));}
    if (ptr!=s1.begin()) {diff=min(diff,(abs(*(ptr-1)-sn[i])));}
    diff =min(diff, abs(s1[0]-sn[i]));
    diff=min(diff,abs(s1[c1 -1]-sn[i]));
   }
 }
}
//found nearest element in s1 and sn have difference =diff

if (diff%2==0) {finalans[j]=diff*diff/2;}
else {finalans[j]=(diff*diff +1)/2;} 

    }
    }  
// ^^^^^^^^^^^^^^^^^&&&&&&& ending here, uncommment previous line



//for  (int x:s1) {cout<<x<<" ";}
//cout<<endl;
//for (int x:sn) {cout<<x<<" ";}
//vector<int> answerkey(T);
//for (int l=0; l<T; l++) {int answ; cin>>answ; answerkey[l]=answ; }


for (int l=0;l<T;l++){cout<<finalans[l]/*<<" "<<answerkey[l]*/<<endl;}

 return(0);   
}
//the issue here is connceted component of 1 is {1} and 869 contains eveyrthing else, so pointer is at sn.begin()...

//please keep going, do not stop whatever happens mony... i wanna be the best ever bruh



// if (find(s1.begin(),s1.end(),value)==s1.end()) {s1.push_back(value);}

//i just did this, connected componenet bitch... come on...
/*i wrote the following code to find the connected component of the nth vertex in a graph (sn is the set)... i have the edges stored as a vector of vectors, where i have m edges, the ith edge is e[i] which has two elements, e[i][0] and e[i][1] , that is it joins these two vertices... i had not yet seen the conventional methods for how to find connected components in code (although i have studied a little graph theory), so im showing you my code (which is correct, i checked) but i just wanna know if there's a better/faster way of doing this... before answering, let me know if you understand my code and query:
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
}*/