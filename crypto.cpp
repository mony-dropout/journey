//im trynna find the freq of each letter, bigram, first letter freq
#include <bits/stdc++.h>
using namespace std;
const int top=6;
void low(char &c)
{
    if (int(c)>96) {
        c=char(int(c)-32);
    }
    
}
void maptovectorchar(vector<pair<char,int>> &v, map<char,int> m)

{   v.resize(m.size());
    int i=0;
    for (const auto& [key,value]:m)
    {
        v[i]={key,value};
    }
    sort(v.begin(),v.end(),[=](pair<char,int> a, pair<char,int> b) {return b.second>a.second;});
}
void maptovectorstring(vector<pair<string,int>> &v, map<string,int> m)
{   v.resize(m.size());
    int i=0;
    for (const auto& [key,value]:m)
    {
        v[i]={key,value};
    }
    sort(v.begin(),v.end(),[=](pair<string,int> a, pair<string,int> b) {return b.second>a.second;});
}
/*void printcharv(vector<pair<char,int>> v)
{
    /*for (auto ptr=v.end()-1; ptr!=v.end()-min(top,(int)v.size()); ptr--)
    {
        auto p=*ptr;
        cout<<p.first<<" "<<p.second<<endl;
    }
   for (auto ptr = v.rbegin(); ptr - v.rbegin() < min(top, (int)v.size()); ++ptr) {
        auto p = *ptr;
        cout << p.first << " " << p.second << endl;
    }
}
void printstringv(vector<pair<string,int>> v)
{
    /*for (auto ptr=v.end()-1; ptr!=v.end()-min(top,(int)v.size()); ptr--)
    {
        auto p=*ptr;
        cout<<p.first<<" "<<p.second<<endl;
    }
   for (auto ptr = v.rbegin(); ptr - v.rbegin() < min(top, (int)v.size()); ++ptr) {
        auto p = *ptr;
        cout << p.first << " " << p.second << endl;
    }
}*/
void printcharv(vector<pair<char, int>> v) {
    for (auto ptr = v.rbegin(); ptr - v.rbegin() < min(top, (int)v.size()); ++ptr) {
        auto p = *ptr;
        cout << p.first << " " << p.second << endl;
    }
}

void printstringv(vector<pair<string, int>> v) {
    for (auto ptr = v.rbegin(); ptr - v.rbegin() < min(top, (int)v.size()); ++ptr) {
        auto p = *ptr;
        cout << p.first << " " << p.second << endl;
    }
}
int main()
{
    map<char,int> f; //freq
    map<string,int> bf; //bigram freq
    map<char,int> ff; //first letter freq
    string s;
    string p; //p is my actual string im operatin on
    while(getline(cin,s))
    {
        p+=s+' ';
    }
    p=' '+p;//so i dont gotta deal w i=0 bullshit
    for (int i=0;i<p.length();i++)
    {
        if (!isalpha(p[i])) {continue;}
        low(p[i]);
        f[p[i]]++;
        if (p[i-1]==' ') {ff[p[i]]++;}
        if (isalpha(p[i+1])) {string t; t+= p[i]; t+=p[i+1]; bf[t]++;}
    }
    vector<pair<char,int>> fv,ffv;
    
    vector<pair<string,int>> bfv;
    maptovectorchar(fv,f);
    maptovectorchar(ffv,ff);
    maptovectorstring(bfv,bf);
    cout<<"frequency normal: \n";
    printcharv(fv);
    cout<<"first letter frequency: \n";
    printcharv(ffv);
    cout<<"bigram frequency: \n";
    printstringv(bfv);
    return(0);
    
    
    
}