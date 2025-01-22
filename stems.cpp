#include <bits/stdc++.h>
using namespace std;
bool isnum(char x){
    int t=int(x);
    if ((t>=48) && (t<=57)) {return true;}
    else {return false;} 
}
int intdig(char x)
{
    if (isnum(x)) {return int(x)-48;}
    else {return -420;}
}
using pii=pair<int,int>;
int main()
{   map<string,int> mon;
mon["jan"]=1;
mon["feb"]=2;
mon["mar"]=3;
mon["apr"]=4;
mon["may"]=5;
mon["jun"]=6;
mon["jul"]=7;
mon["aug"]=8;
mon["sep"]=9;
mon["oct"]=10;
mon["nov"]=11;
mon["dec"]=12;
    vector<pair<string,string>> v;
    for (int i=0;i<53;i++)
    {
        string s; getline(cin,s);
        for (int k=0;k<s.length();k++)
        {
            if (isalpha(s[k])) {if (int(s[k])<91) {s[k]=char(int(s[k]+32));} }
        }
        int dash;
        for (int j=0;j<s.length();j++)
        {
            if (s[j]=='-') {dash=j; break;}
        }
        string a=s.substr(0,dash);
        string b=s.substr(dash+1);
        
        for (int j=0; j<=dash-3;j++)
        {
            if (mon.count(a.substr(j,3))) {string t=a; a=b; b=t;} //name,birthday
        }
        v.push_back(make_pair(a,b));
    }
    //int n; cin>>n; cout<<v[n].first<<"does this work"<<v[n].second;
    
    vector<pair<int,int>> val(53) ; //(index,birithday value)
    for (int i=0;i<53;i++)
    {
        val[i].first=i;
        int month;
        string b=v[i].second;
        for (int j=0;j<=b.length()-3;j++)
        {
            if (mon.count(b.substr(j,3))) {month=mon[b.substr(j,3)]; break;}
        }
        int day=0;
        int dig;
        for (int j=0;j<=b.length()-2;j++)
        {
            
            if (isnum(b[j])) {dig=j; break;}
        }

        if (isnum(b[dig+1]))  {day=10*intdig(b[dig])+intdig(b[dig+1]);}
        else day=intdig(b[dig]);
        val[i].second=100*month+day;
        
    }
    sort(val.begin(),val.end(),[=](pii a, pii b) {return (a.second<b.second);});
    for (int i=0;i<53;i++)
    {
        int index=val[i].first;
        cout<<v[index].first<<" - "<<v[index].second<<endl;
    }

    //int n; cin>>n; cout<<v[n].first<<"  this work "<<v[n].second<<endl<<val[n].first<<endl<<val[n].second;
    return(0);
    
}