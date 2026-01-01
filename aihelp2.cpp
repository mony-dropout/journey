#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

// compute major index of a 1-based permutation w[1..n]
int maj(const vi &w) {
    int ans = 0, n = w.size() - 1;
    for (int i = 1; i < n; ++i)
        if (w[i] > w[i+1])
            ans += i;
    return ans;
}

// compute inversion count of a 1-based permutation w[1..n]
int inv(const vi &w) {
    int ans = 0, n = w.size() - 1;
    for (int i = 2; i <= n; ++i)
        for (int j = 1; j < i; ++j)
            if (w[j] > w[i])
                ++ans;
    return ans;
}

// drop the dummy 0th entry so we store only w[1..n]
vi drop0(const vi &w) {
    return vi(w.begin() + 1, w.end());
}

int main() {
    int n;
    cin >> n;
    int maxMaj = n*(n-1)/2;
    vector<vector<vi>> eqmaj(maxMaj+1);

    // generate all permutations w[1..n]
    vi w(n+1);
    iota(w.begin(), w.end(), 0);  // w = {0,1,2,...,n}
    do {
        int m = maj(w);
        eqmaj[m].push_back(drop0(w));
    } while (next_permutation(w.begin()+1, w.end()));

    int k;
    cout << "Enter k: ";
    cin >> k;
    cout << "Now input values i; for each, I'll print all perms with maj = k-i sorted by inv.\n";

    int i;
    while (cin >> i) {
        int target = k - i;
        if (target < 0 || target > maxMaj) {
            cout << "  [no perms for maj = " << target << "]\n\n";
            continue;
        }

        // collect (perm, inv) pairs
        vector<pair<vi,int>> results;
        for (auto &perm : eqmaj[target]) {
            vi tmp(n+1);
            tmp[0] = 0;
            copy(perm.begin(), perm.end(), tmp.begin()+1);
            results.emplace_back(perm, inv(tmp));
        }

        // sort by inversion count
        sort(results.begin(), results.end(),
             [](auto &A, auto &B){ return A.second < B.second; });

        // print out
        cout << "maj = " << target << "  →  permutations:\n";
        for (auto &pr : results) {
            for (int x : pr.first) cout << x;
            cout << "  inv=" << pr.second << "\n";
        }
        cout << "\n";
    }

    return 0;
}