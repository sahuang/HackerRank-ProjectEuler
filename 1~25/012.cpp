// https://www.hackerrank.com/contests/projecteuler/challenges/euler012/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;

int countDivisor(ll n) {
    if (n < 4) return 1;
    int count = 1;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    for (int p = 3; p*p<=n; p+=2) {
        int countp = 1;
        while (n % p == 0) {
            countp++;
            n /= p;
        }
        count *= countp;
    }
    if (n > 1) count *= 2;
    return count;
}

int main() {
    vector<int> f(1001);
    f[1] = 2; // the 2nd triangle number has >1 divisors
    f[2] = 3;
    f[3] = 3;
    int curr = 4;
    ll num = 4;
    while (curr < 1001) {
        int dd = countDivisor(num*(num+1)/2);
        if (dd > curr) {
            while (curr < 1001 && curr < dd) {
                f[curr++] = num;
            }
        }
        num++;
    }
    
    int t;
    cin >> t;
    while (t--) {
        int tt;
        cin >> tt;
        cout << (ll)f[tt]*(f[tt]+1)/2 << '\n';
    }
    return 0;
}
