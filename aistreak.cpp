#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;

// genbin is no longer needed, but keeping it is harmless if unused.

vi fillvals(int n)
{
    // m = 2^n
    const uint32_t m = (n >= 31 ? 0u : (1u << n)); // n<=30 safe; for n=25 it's fine
    vi v(n + 1, 0);
    for (uint32_t i = 0; i < m; ++i)
    {
        int maxstreak = 0;
        int curstreak = 0;

        // scan exactly n bits (include leading zeros)
        for (int j = 0; j < n; ++j)
        {
            if ((i >> j) & 1u) { // bit j is 1
                ++curstreak;
                if (curstreak > maxstreak) maxstreak = curstreak;
            } else {
                if (curstreak > maxstreak) maxstreak = curstreak;
                curstreak = 0;
            }
        }
        v[maxstreak]++;
    }
    return v;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    if (!(cin >> n)) return 0;

    vi v = fillvals(n);

    double expected = 0.0;
    const double m = ldexp(1.0, n); // 2^n as double, exact for n<=52
    for (int i = 0; i <= n; ++i)
        expected += (double)v[i] * i / m;

    cout.setf(std::ios::fixed); 
    cout << setprecision(10) << expected << "\n";
    return 0;
}
