// https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;


int main() {
    int t;cin>>t;
    while(t--) {
        ll n;
        cin >> n;
        ll x=1, y=2;
        ll res = 0;
        while (1) {
            if (x % 2 == 0) res += x;
            if (x+y > n) {
                if (y % 2 == 0) res += y;
                break;
            }
            ll tmp = x;
            x = y;
            y += tmp;
        }
        cout << res << '\n';
    }
    return 0;
}
