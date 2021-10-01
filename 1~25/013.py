# https://www.hackerrank.com/contests/projecteuler/challenges/euler013/problem

#!/bin/python3

import sys

t = int(input().strip())
res = 0
for a0 in range(t):
    res += int(input().strip())

print(str(res)[:10])