// https://www.hackerrank.com/contests/projecteuler/challenges/euler022/problem

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int calc(string s, int pos) {
    int x = 0;
    for (char c : s) x += c - 'A' + 1;
    return x * pos;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    vector<string> names(N);
    for (int i = 0; i < N; i++) {
        cin >> names[i];
    }
    sort(names.begin(), names.end());
    
    unordered_map<string, int> pos;
    for (int i = 0; i < N; i++) pos[names[i]] = i+1;
    
    int Q;
    cin >> Q;
    while (Q--) {
        string s;
        cin >> s;
        cout << calc(s, pos[s]) << '\n';
    }
    
    return 0;
}
