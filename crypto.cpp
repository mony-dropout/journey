#include <bits/stdc++.h>
using namespace std;
const int top = 6;

void low(char &c) {
    if (int(c) > 96) {
        c = char(int(c) - 32);
    }
}

void maptovectorchar(vector<pair<char, int>> &v, map<char, int> m) {
    v.resize(m.size());
    int i = 0;
    for (const auto &[key, value] : m) {
        v[i] = {key, value}; // Properly assigning the pairs
        i++;
    }
    sort(v.begin(), v.end(), [=](pair<char, int> a, pair<char, int> b) { return b.second > a.second; });
}

void maptovectorstring(vector<pair<string, int>> &v, map<string, int> m) {
    v.resize(m.size());
    int i = 0;
    for (const auto &[key, value] : m) {
        v[i] = {key, value}; // Properly assigning the pairs
        i++;
    }
    sort(v.begin(), v.end(), [=](pair<string, int> a, pair<string, int> b) { return b.second > a.second; });
}

void printcharv(vector<pair<char, int>> v) {
    for (auto ptr = v.rbegin(); ptr - v.rbegin() < min(top, (int)v.size()); ++ptr) {
        auto p = *ptr;
        cout << p.first << " " << p.second << endl;
    }
}

void printstringv(vector<pair<string, int>> v) {
    for (auto ptr = v.rbegin(); ptr - v.rbegin() < min(top, (int)v.size()); ++ptr) {
        auto p = *ptr;
        cout << p.first << " " << p.second << endl;
    }
}

int main() {
    map<char, int> f;   // Frequency of each letter
    map<string, int> bf; // Bigram frequency
    map<char, int> ff; // First letter frequency
    string s;
    string p; // Entire text being processed
    while (getline(cin, s)) {
        p += s + ' ';
    }
    p = ' ' + p; // Padding to simplify boundary cases
    for (int i = 0; i < p.length(); i++) {
        if (!isalpha(p[i])) {
            continue;
        }
        low(p[i]); // Convert to uppercase
        f[p[i]]++; // Count letter frequency
        if (p[i - 1] == ' ') {
            ff[p[i]]++; // Count first letters of words
        }
        if (i < p.length() - 1 && isalpha(p[i + 1])) {
            string t;
            t += p[i];
            t += p[i + 1];
            bf[t]++; // Count bigrams
        }
    }
    vector<pair<char, int>> fv, ffv;
    vector<pair<string, int>> bfv;

    maptovectorchar(fv, f);
    maptovectorchar(ffv, ff);
    maptovectorstring(bfv, bf);

    cout << "Frequency normal: \n";
    printcharv(fv);

    cout << "First letter frequency: \n";
    printcharv(ffv);

    cout << "Bigram frequency: \n";
    printstringv(bfv);

    return 0;
}
