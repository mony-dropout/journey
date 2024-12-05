#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int q; cin>>q;
    vector<string> v(n);
    
    for (int i=0;i<n;i++)
    {
        string y;
        cin>>y;
        v[i]=y;
    }
    vector<int> tf(n+1,-1);

    for (int i=1;i<=n;i++)
    {
        
        if (v[i-1]=="true") {tf[i]=1;}
        else if (v[i-1]=="false") {tf[i]=0;}
    }
    vector<int> bl(n+1,-2); //truth value upto i
    bl[1]=tf[1];
    for (int i=2; i<=n;i++)
    
    {   
        if (i%2==1) 
        {
            if (v[i-2]=="and"){bl[i]=tf[i]*tf[i-2];}
            else if (v[i-2]=="or") {if (tf[i]+tf[i-2]==0) {bl[i]=0;} else{bl[i]=1;}}
        }
        else {continue;}
    }
    //vector<int> br(n,-2); //truth value upto n-i from right
    reverse(v.begin(),v.end());
    

    for (int i=1;i<=n;i++)
    {
        
        if (v[i-1]=="true") {tf[i]=1;}
        else if (v[i-1]=="false") {tf[i]=0;}
    }
    vector<int> br(n+1,-2); //truth value upto i
    br[1]=tf[1];
    for (int i=2; i<=n;i++)
    
    {   
        if (i%2==1) 
        {
            if (v[i-2]=="and"){br[i]=tf[i]*tf[i-2];}
            else if (v[i-2]=="or") {if (tf[i]+tf[i-2]==0) {br[i]=0;} else{br[i]=1;}}
        }
        else {continue;}
    }
    reverse(v.begin(),v.end());

for (int i=0;i<q;i++)
{
    int l,r; cin>>l>>r;
    string k; cin>>k;
    int a;
    if (k=="true") {a=1;}
    else{a=0;}
    if (l==1 && r!=n)
    {
        if (v[r]=="and") {if( (1 && br[n-r-1]) == a || (0 && br[n-r-1]) == a ) {cout<<'Y';} else{cout<<'N';}}
        else {if( (1 || br[n-r-1]) == a || (0 || br[n-r-1]) == a ) {cout<<'Y';} else{cout<<'N';}}
    }
    if (r==n && l!=1)
     {
        if (v[l-2]=="and") {if( (1 && bl[l-1]) == a || (0 && bl[l-1]) == a ) {cout<<'Y';} else{cout<<'N';}}
        else {if( (1 || bl[l-1]) == a || (0 || br[l-1]) == a ) {cout<<'Y';} else{cout<<'N';}}
    } 
    if (r==n && l==1)
    {
        if (a==bl[n]) {cout<<'Y';}
        else {cout<<'N';}
    }
    else 
    {  int x,t,f;
       if (v[l-2]=="and"){t=(bl[l-1]&& true); f=(bl[l-1]&&false);}
       else {t=(bl[l-1]|| true); f=(bl[l-1]||false);}
       if (v[r]=="and") {t=(t&& br[n-r-1]); f=(f&&br[n-r-1]);}
       else {t=(t || br[n-r-1]); f=(f||br[n-r-1]);}
       if (t==a || f==a) {cout<<'Y';}
       else{cout<<'N';}
    }
cout<<endl;

}
return(0);

}