# https://www.hackerrank.com/contests/projecteuler/challenges/euler006/problem

#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    print(int(n*n*(n+1)*(n+1)/4 - n*(n+1)*(2*n+1)/6))