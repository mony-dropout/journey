#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<char> v(n, '0');
    for (int i = 0; i < n; i++) {
        v[i] = s[i];
    }
    for (int t=n-1; t>=0; t++) {
    for (int i = 0; i < n - (t-1); i++) { // Changed from n - 3 to n - 2
        for (int j = i + 1; j < n - (t-1); j++) { // Changed from n - 3 to n - 2
            if (equal(v.begin() + i, v.begin() + i + t, v.begin() + j)) {
                cout << t; break;
            }
        }
    }
    }

    return 0;
}
