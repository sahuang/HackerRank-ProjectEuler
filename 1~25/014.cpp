// https://www.hackerrank.com/contests/projecteuler/challenges/euler014/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> collatz(5000001, -1); // number <= i that has most steps
    vector<int> steps(5000001, -1); // steps from number i
    vector<int> maxSteps(5000001, -1); // maxSteps from number i
    for (int i = 1; i < 3; i++) {
        collatz[i] = i;
        steps[i] = i;
        maxSteps[i] = i;
    }

    for (int i = 3; i <= 5e6; i++) {
        long long count = 0, tmp = i;
        while (tmp > 1) {
            if (tmp % 2 == 0) tmp /= 2;
            else tmp = tmp*3 + 1;
            count++;
            if (tmp < 5e6 && steps[tmp] != -1) {
                // has steps stored
                count += steps[tmp];
                break;
            }
        }
        steps[i] = count;
        if (steps[i] >= maxSteps[i-1]) {
            collatz[i] = i;
            maxSteps[i] = steps[i];
        } else {
            collatz[i] = collatz[i-1];
            maxSteps[i] = maxSteps[i-1];
        }
    }
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << collatz[n] << '\n';
    }
    return 0;
}
