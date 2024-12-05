#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
     string s;
    while (getline(cin, s,'\x04')) { //takes input till you press ctrl+D
        for(int i=0;i<s.length()-1;i++)
    {if (s[i]=='a' && (s[i+1]!='c' && s[i+1]!='u')) {s[i]='b';} 
    else if (s[i]=='b' && s[i+1]!='a' && s[i+1]!='e') {s[i]='a';}
    
    }
    cout<<s<<endl;
    return(0);
}
}