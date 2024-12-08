#include <bits/stdc++.h>
using namespace std;
string decr(string s, int j)
{
    for (int i=0;i<s.length();i++)
    {   if (s[i]==' ') {continue;}
        int t=int(s[i])-'a'-j;
        t=(t+26)%26;
        s[i]=char(t+int('a'));
    }
    return s;

}
string encr(string s, int j)
{
    for (int i=0;i<s.length();i++)
    {   if (s[i]==' ') {continue;}
        int t=int(s[i]-'a')+j;
        t=(t+26)%26;
        s[i]=char(int('a')+t);
    }
    return s;
}
int main()
{
    int j; cin>>j;   
    int eord;
    cin>>eord;
    string s;
    while(getline(cin,s,'\x04')); //takes input till you press ctrl+d 
    
    if (eord==1) {cout<<decr(s,j);}
    if (eord==0) {cout<<encr(s,j);}
    
    cout<<endl;
    return(0);
    
    

}