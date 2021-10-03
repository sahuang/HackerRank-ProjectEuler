// https://www.hackerrank.com/contests/projecteuler/challenges/euler021/problem

#include <bits/stdc++.h>
using namespace std;

int sumDiv(int n) {
    int res = 0, i = 1;
    for (i = 1; i*i < n; i++) {
        if (n % i == 0) res += i + n/i;
    }
    if (i*i == n) res += i;
    return res - n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> div(1e5+1, 0);
    for (int i = 1; i < 1e5+1; i++) 
        div[i] = sumDiv(i);
    
    map<int, int> amicable;
    for (int i = 1; i < 1e5+1; i++) {
        if (div[i] < 1e5+1 && div[div[i]] == i && div[i] != i) {
            amicable[min(i, div[i])] = max(i, div[i]);
        }
    }
    
    // for (auto i : amicable) cout << i.first << "," << i.second << '\n';
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long res = 0;
        for (const auto& tt : amicable) {
            if (tt.first > n) break;
            res += tt.first;
            if (tt.second <= n) res += tt.second;
        }
        cout << res << '\n';
    }
}