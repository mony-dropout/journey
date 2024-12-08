#include <bits/stdc++.h>
using namespace std;
string decr(string s, int j)
{
    for (int i=0;i<s.length();i++)
    {   int t=int(s[i])-'a'-j;
        t=(t+26)%26;
        s[i]=char(t+int('a'));
    }
    return s;

}
string encr(string s, int j)
{
    for (int i=0;)
}
int main()
{
    int j; cin>>j;   
    string s;
    cin>>s; //takes input till you press ctrl+d 
    
    cout<<decr(s,j);
    return(0);
    
    

}