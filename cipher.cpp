/*
take a list of real life most frequent words
make a list of my most frequent words
replace the string///

*/
#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int main()
{
    string s; 
    getline(cin,s);
    s=s+' ';
    vector<vector<int>> lf (26,vi(2)); //lf[][0] is the letter and lf[][1] is it's frequency
    vector<vi> bf(26*26,vi(2)); //bf is biagram frequency 26i+j
    vector<vector<int>> fl(26,vi(2)); //number of times first some char was the first letter...
    for (int i=0;i<26;i++)
    {
        lf[i][0]=i;
        fl[i][0]=i;
        for (int j=0;j<26;j++)
        {
            bf[26*i+j][0]=26*i+j;
        }
    }
    //first loop for lf 
    for (int i=0;i<s.length()-1;i++)
    {
        if (s[i]==' ') {continue;}
        lf[s[i]-'A'][1]++;
    }
    //this loop for fl
    for (int i=0;i<s.length()-1;i++)
    {   if (i==0) {fl[s[0]-'A'][1]++;}
        if (s[i]!=' ') {continue;}
        if (s[i]==' ') {fl[s[i+1]-'A'][1]++;}
    }
    //this loop for bf
    for (int i=0;i<s.length()-1;i++)
    {
        if ((s[i]==' ') || (s[i+1]==' ')) {continue;}
        int a=s[i]-'A';
        int b=s[i+1]-'A';
        bf[26*a+b][1]++;
    }
    //lf (letter frequency), bf (biagram freq), fl (first letter freq)
    sort(lf.begin(),lf.end(),[=](vi a,vi b){return a[1]>b[1];});
    sort(bf.begin(),bf.end(),[=](vi a,vi b){return a[1]>b[1];});
    sort(fl.begin(),fl.end(),[=](vi a,vi b){return a[1]>b[1];});
    
    cout<<"letter frequency"<<endl;
    for (int i=0;i<10;i++) //im replacing 26 by 10  (top 10 only)
    {
        if (lf[i][1]==0) {break;}
        cout<<char(lf[i][0]+'A')<<" : "<<lf[i][1]<<endl;
    }
    cout<<endl;
    cout<<"first letter frequency"<<endl;
    for (int i=0;i<6;i++) //replacing 26 by 6 (top 6 only)
    {
        if (fl[i][1]==0) {break;}
        cout<<char(fl[i][0]+'A')<<" : "<<fl[i][1]<<endl;
    }
    cout<<endl;
    cout<<"biagram frequency"<<endl;
    for (int i=0;i<10;i++) //replacing 26*26 by 10 (top 10 only)
    {
        if (bf[i][1]==0) {break;}
        int m=bf[i][0];
        int y=m%26;
        int x= m/26 ;
        cout<<char(x+'A')<<char(y+'A')<<" : "<<bf[i][1]<<endl;
    }
    return(0);


}
/*

CEPYQ GSGLD MLPYN IUSCP QOYGM JGCPL GDWWJ DMLSL OJCNY NYLYD LJQLO DLCNL YPLOJ TPJDM NJQLO JWMSE JGGJG XTUOY EOOJO DQDMM YBJQD LLOJV LOJTV YIOLU JPPES NGYQJ MOYVD GDNJE MSVDN EJM*/


