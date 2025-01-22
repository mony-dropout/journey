#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
vector<string> towords(string s)
{   vector<string> v;
    int start=0; 
    for (int i=0;i<s.length();i++)
    {
        if (s[i]==' ') {v.push_back(s.substr(start,i-start)); start=i;}
    }
    for (string& s:v)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    return v;
}
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

    vector<pair<string,string>> mony;
    for (int i=0;i<54;i++)
    {   
        string x;
        getline(cin,x);
        int dash=0;
        for (int j=0;j<x.length();j++)
        {
            if (x[j]=='-' ) {dash=j;}
        }
        
        string a=x.substr(0,dash);
        string b=x.substr(dash+1);
        vector<string> v=towords(a);
        int t=0;
        for (string s: v) 
        {
            if (mon.count(s)) {t=1; break;}
        }
        if (t==0) {
            mony.push_back( make_pair(a,b));
        }
        else {mony.push_back(make_pair(b,a));}
//so basically first part of pair is name, second part of pair is birthday
    vector<string> p=towords(mony[i].second);
    int month=mon[p[1]];
    int day=stoi(p[0]);
    int bday=100*month+day;
    mony[i].second=to_string(bday);


    }
    sort(mony.begin(),mony.end(),[=](pair<string,string> a, pair<string,string> b){return stoi(a.second)<stoi(b.second);}) ;
    for (int i=0;i<54;i++)
    {   int n=stoi(mony[i].second);

        cout<<mony[i].first<<" : "<<n%100<<"/"<<n/100<<endl;
    }
return(0);
    
    
}