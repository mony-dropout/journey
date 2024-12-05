#include <bits/stdc++.h>
using namespace std;
int main()
{   cout<<endl;
    vector<int> t(16,0);
    t[0]=0;
    for (int i=0;i<=15;i++)
    {t[i]=t[i-1]+i;}
    vector<int> t2;
    for (int i=1;i<=15;i++)
    {
        for (int j=i;j<=15;j++)
        {   int a=t[i]+t[j];
            if (a>104) {continue;}
            if (find(t2.begin(),t2.end(),a)==t2.end() && find(t.begin(),t.end(),a)==t.end()) {t2.push_back(a);}
        }
    }
    vector<int> t3;
    for (int i=1;i<=15;i++)
    {
        for (int x:t2)
        {
            int a=x+t[i];
            if (a>104) {continue;}
            if (find(t3.begin(),t3.end(),a)==t3.end() && find(t2.begin(),t2.end(),a)==t2.end() && find(t.begin(),t.end(),a)==t.end() ){t3.push_back(a);}
        }
    }
    sort(t2.begin(),t2.end());
    sort(t3.begin(),t3.end());
    cout<<"Triangular numbers are"<<endl;
    for (int x:t) {cout<<x<<" ";}
    cout<<endl;
    cout<<"double Triangular numbers are"<<endl;
    for (int x:t2) {cout<<x<<" ";}
    cout<<endl;
    cout<<"triple Triangular numbers are"<<endl;
    for (int x:t3) {cout<<x<<" ";}
    cout<<endl;

    return 0;
}


//the sum of trianglular numebrs aspans the entire natural numebrs... how ca we prove this...