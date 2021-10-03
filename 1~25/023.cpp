// https://www.hackerrank.com/contests/projecteuler/challenges/euler023/problem

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
    
    set<int> abundant;
    for (int i = 1; i < 28124; i++) 
        if (sumDiv(i) > i)
            abundant.insert(i);
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n > 28123) {
            cout << "YES\n";
            continue;
        }
        bool good = false;
        for (const auto& tt : abundant) {
            if (2*tt > n) {
                break;
            }
            if (abundant.count(n - tt)) {
                good = true;
                break;
            }
        }
        if (good) cout << "YES\n";
        else cout << "NO\n";
    }
}
