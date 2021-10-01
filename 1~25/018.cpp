// https://www.hackerrank.com/contests/projecteuler/challenges/euler018/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++) {
            vector<int> tmp(i+1);
            for (int j = 0; j <= i; j++) {
                cin >> tmp[j];
            }
            a[i] = std::move(tmp);
        }
        for (int i = n-2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                // a[i][j] takes max of its two children
                a[i][j] += max(a[i+1][j], a[i+1][j+1]);
            }
        }
        cout << a[0][0] << '\n';
    }
}