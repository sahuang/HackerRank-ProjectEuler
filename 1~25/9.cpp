// https://www.hackerrank.com/contests/projecteuler/challenges/euler009/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    map<int, int> mp;
    int n = 3000;
    for (int a = 3; a < n/3+1; a++) {
        for (int b = a+1; b < (n-a)/2+1; b++) {
            int c = sqrt(a*a+b*b);
            if (a+2*b < n && c*c == a*a+b*b) {
                mp[a+b+c] = max(mp[a+b+c], a*b*c);
            }
        }
    }
    
    while (t--) {
        int tt;
        cin >> tt;
        if (mp.count(tt)) cout << mp[tt] << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}
