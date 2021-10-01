# https://www.hackerrank.com/contests/projecteuler/challenges/euler016/problem

#!/bin/python3

import sys

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    res = 2**n
    print(sum(int(i) for i in str(res)))