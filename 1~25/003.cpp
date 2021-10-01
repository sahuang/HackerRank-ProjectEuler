// https://www.hackerrank.com/contests/projecteuler/challenges/euler003/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long maxPrimeFactors(long long n) {
    
    long long maxPrime = -1;
 
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1;
    }

    while (n % 3 == 0) {
        maxPrime = 3;
        n=n/3;
    }
 
    // now we have to iterate only for integers
    // who does not have prime factor 2 and 3
    for (int i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
        while (n % (i+2) == 0) {
            maxPrime = i+2;
            n = n / (i+2);
        }
    }
 
    // This condition is to handle the case
    // when n is a prime number greater than 4
    if (n > 4)
        maxPrime = n;
 
    return maxPrime;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << maxPrimeFactors(n) << '\n';
    }
    return 0;
}
