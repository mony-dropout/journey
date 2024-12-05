#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; getline(cin,s);
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='I') {s[i]='e';} //replace e by encrypted message, d by decrypted message (keep d in lower case so you know what youre trying)
        if (s[i]=='F') {s[i]='f';}
        if (s[i]=='W') {s[i]='w';}
        if (s[i]=='X') {s[i]='h';}

    }
    cout<<endl;
    
    cout<<s;
    cout<<endl;
    return(0);
}