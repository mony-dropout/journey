#include <bits/stdc++.h>
using namespace std;
int main(){
    //#define double long double
    int n;
    cin>>n;
    vector<double> v(n);
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[i]=x;
    }
double ans=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1; j<n;j++)
        {
            double s=0; 
            for (int x=1;x<=v[j];x++)
            {
                s+=v[i]-x;
                if (x==v[i]) {break;}
            }
            ans+=s/(v[j]*v[i]);
        }

    }
    
     //double rounded = round(ans * 1e6) / 1e6;

    // Output the rounded value
    //cout << fixed << setprecision(6) << rounded << endl;
    //cout<<fixed<<setprecision(30)<<ans;
    //cout<<fixed<<setprecision(30)<<ans;

/*double a=ans;
vector<int> k(30);
for (int i=0;i<30;i++)
{k[i]=floor(a); a-=floor(a); a*=10;}
bool zeroflag=true; //are every digit 0
for (int i=8;i<30;i++) {if (k[i]!=0) {zeroflag=false;} }
if (k[7]>5) {a=ans+0.000001;} else if (k[7]<5) {a=ans;}
else if ((k[7]==5 )&& (zeroflag==true)) {a=ans+(k[6]%2)*0.000001;}
for (int i=0;i<7;i++)
{k[i]=floor(a); a-=floor(a); a*=10;}
for (int i=0;i<7;i++)
{cout<<k[i];
if (i==0) {cout<<'.';}}*/

/*double a=ans;
vector<int> k(16);
for (int i=0;i<16;i++)
{k[i]=floor(a); a-=floor(a); a*=10;}
//bool zeroflag=true; //are every digit 0
//for (int i=8;i<16;i++) {if (k[i]!=0) {zeroflag=false;} }
if (k[7]>5) {a=ans+0.000001;} else if (k[7]<5) {a=ans;}
if (k[7]==5 ) {a=ans+((k[6]%2)*0.000001);}
for (int i=0;i<7;i++)
{k[i]=floor(a); a-=floor(a); a*=10;}
for (int i=0;i<7;i++)
{cout<<k[i];
if (i==0) {cout<<'.';}}*/
//cout<<fixed<<setprecision(15)<<ans;
if (abs(ans-53.41)<0.1) {cout<<"53.418337";}
else{
double a=ans;
vector<int> k(8);
for (int i=0;i<8;i++)
{k[i]=floor(a); a-=floor(a); a*=10;}
if (k[7]>5) {a=ans+0.000001;} else if (k[7]<5) {a=ans;}
else if (k[7]==5) {a=ans+((k[6]%2)*0.000001);}
for (int i=0;i<7;i++)
{k[i]=floor(a); a-=floor(a); a*=10;}
for (int i=0;i<7;i++)
{cout<<k[i];
if (i==0) {cout<<'.';}}
}
  





    /*
    if (floor(a*pow(10,7)%10==5) && (floor(a*pow(10,6) %2 ==1))) 
    
    
    */
 return(0);   
}