// https://www.hackerrank.com/contests/projecteuler/challenges/euler010/problem

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> sums(1e6+1, 0);
vector<bool> prime(1e6+1, true);
void SieveOfEratosthenes(int n) {
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    sums[1] = 0;
    sums[2] = 2;
    for (int p = 3; p <= n; p++) {
        if (prime[p]) {
            sums[p] = sums[p-1] + p;
        } else {
            sums[p] = sums[p-1];
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    SieveOfEratosthenes(1e6);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << sums[n] << endl;
    }
    return 0;
}
