#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    
    vector<int> c(n), t(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        d[i] = c[i] - t[i];
    }

    
    vector<int> countLess(n + 1, 0);
    for (int i = 0; i < n; i++) {
        if (d[i] >= 0) {
            countLess[d[i]]++;
        }
    }

    
    for (int i = 0; i < q; i++) {
        int v, s;
        scanf("%d %d", &v, &s);
        int x = 0;
        for (int j = 0; j <= s; j++) {
            x += countLess[j];
        }
        if (x >= v) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
