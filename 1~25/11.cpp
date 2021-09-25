// https://www.hackerrank.com/contests/projecteuler/challenges/euler011/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define N 20

int main() {
    vector<vector<int>> nums(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> nums[i][j];
        }
    }
    
    int res = 0;
    // row
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-3; j++) {
            res = max(res, nums[i][j]*nums[i][j+1]*nums[i][j+2]*nums[i][j+3]);
        }
    }
    // col
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-3; j++) {
            res = max(res, nums[i][j]*nums[i][j+1]*nums[i][j+2]*nums[i][j+3]);
        }
    }
    // left-top to right-bottom
    for (int i = 0; i < N-3; i++) {
        for (int j = 0; j < N-3; j++) {
            res = max(res, nums[i][j]*nums[i+1][j+1]*nums[i+2][j+2]*nums[i+3][j+3]);
        }
    }
    // last
    for (int i = 3; i < N; i++) {
        for (int j = 0; j < N-3; j++) {
            res = max(res, nums[i][j]*nums[i-1][j+1]*nums[i-2][j+2]*nums[i-3][j+3]);
        }
    }
    
    cout << res << '\n';
    return 0;
}
