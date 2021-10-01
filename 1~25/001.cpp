// https://www.hackerrank.com/contests/projecteuler/challenges/euler001

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll N;
        cin >> N;
        // 3,6,9,...
        ll up3 = 3*(ll)(N/3);
        if (up3 == N) up3 -= 3;
        ll up5 = 5*(ll)(N/5);
        if (up5 == N) up5 -= 5;
        ll up15 = 15*(ll)(N/15);
        if (up15 == N) up15 -= 15;
        ll ans3 = 3*(up3/3)*(up3/3+1)/2;
        ll ans5 = 5*(up5/5)*(up5/5+1)/2;
        ll ans15 = 15*(up15/15)*(up15/15+1)/2;
        cout << ans3+ans5-ans15 << endl;
    }
    return 0;
}
