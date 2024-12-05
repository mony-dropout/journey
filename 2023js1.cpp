#include <bits/stdc++.h>
using namespace std; //till 57
using vi=vector<int>;
int pro(vi v, int i, int power) {
    if (power==0) {return v[i];}
    else{
        return v[pro(v,i,power-1)];
    }
}
int main(){
    /*int T;
    cin>>T;
    for (int test=0; test<T; test++)
    {*/
    string s1, s2;
    cin>>s1>>s2;
    vi work(60,-1);
    int p=s1.length();
    int ans=0;
    vector<int> imo;
    for (int i=0;i<s1.length();i++)
    {   if ((work[s1[i]-'A'] >-1) && (work[s1[i]-'A']!=s2[i]-'A') ) {ans=-1; break;}
        else {
        work[s1[i]-'A']=s2[i]-'A';  
        if (s1[i]!=s2[i])
        {ans++;}

        }
    }
    for (int i=0;i<60;i++)
    {
        if ((work[i]==-1) || (work[i]=i)) {continue;}
        else
        {
            for (int j=1;j<60;j++)
            {
                if (pro(work,i,j)==i) {ans++; break;}
                
            }
        }

    }
    cout<<ans;
    for (int j=0;j<60;j++)
    {
        cout<<pro(work,'x'-'A',j)<<" ";
        if (pro(work,'x'-'A',j)=='x'-'A') {break;}

    }
    /*if (test!=T-1) {cout<<endl;}
    }*/
    return(0);
}
