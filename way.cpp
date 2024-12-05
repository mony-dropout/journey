#include <bits/stdc++.h>
using namespace std;
const int MM=1000;
vector<int> p()
{
    vector<bool> isp(MM,true);
    isp[0]=false;
    isp[1]=false;
    int root=floor(sqrt(MM)+10);
    for (int i=2;i<=root;i++)
    {
        if (i>2 && i%2==0) {isp[i]=false; continue;}
        if (isp[i])
        {
            for (int j=i*i;j<=MM;j+=i)
            {
                isp[j]=false;
            }
        }
    }
    vector<int> j;
    for (int i=0;i<=MM;i++)
    {
        if (isp[i]) {j.push_back(i);}
    }
    return j;

}
int main()
{
    vector<int> v=p();
    for (int x:v) {cout<<x<<" ";}
    return(0);
}