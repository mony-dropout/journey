#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
 
void soe(int n)
{
    bool is_prime[n + 1];
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }
    
}
 int m=1000000;

int main(){
    int n;
    cin>>n;

soe(100000);
for (int i=0;i<m;i++)
{for (int j=i+1;j<m;j++)
{
int x=soe[i]; int y=soe(j);
if 
}
}


}