#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
    ifstream cin("gymnastics.in");
    ofstream cout("gymnastics.out");
    int k,n;
    cin>>k>>n;
    vector <vector<int>> s(k,vector<int>(n,0)); //practice session ranking vector,s[i] is the ith practice session ranking, s[i][j] is the jth cow in ith session.
    for (int i=0; i<k; i++)
    {
        for (int j=0;j<n;j++)
        {
            int a; cin>>a; s[i][j]=a;
        }
    }



vector<vector<int>> r0 (n,vector<int>(n,0));
for (int i=0; i<n; i++) 
{
    for (int j=0;j<n;j++) 
    {
        r0[i][j]= find(s[0].begin(),s[0].end(),j+1)-find(s[0].begin(),s[0].end(),i+1);
    }
}
int sign=1;
int ans=0;
for (int i=0; i<n; i++) 
{
    for (int j=0;j<n;j++) 
    {
       for (int p=0; p<k; p++) 
        {
            if((find(s[p].begin(),s[p].end(),j+1)-find(s[p].begin(),s[p].end(),i+1))*r0[i][j]>0) {sign=sign*1;}
            else (sign=sign*0);
        }
        if (sign>0) {ans++;}
        sign=1;

    }
}

cout<<ans/2;
 /*for (int p=0; p<k; p++) 
        {
            if((find(s[p].begin(),s[p].end(),4)-find(s[p].begin(),s[p].end(),1))*r0[0][3]>0) {sign=sign*1;}
            else (sign=sign*0);
        }
        if (sign>0) {ans++;}
       
        sign=1;*/
        
        
cin.close();
cout.close();             
return(0);
}



/*
3 4
4 1 2 3
4 1 3 2
4 2 1 3
*/