// https://www.hackerrank.com/contests/projecteuler/challenges/euler008/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        // s.length == n
        ll ans = 0;
        for (int i = 0; i < n-k+1; i++) {
            ll tmp = 1;
            for (int j = i; j < i+k; j++) {
                tmp *= (s[j] - '0');
                if (tmp == 0) break;
            }
            ans = max(ans, tmp);
        }
        cout << ans << endl;
    }
    return 0;
}
