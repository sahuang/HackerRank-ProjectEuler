# https://www.hackerrank.com/contests/projecteuler/challenges/euler005/problem

#!/bin/python3

import sys
import math

def lcm(a, b):
    return abs(a*b) // math.gcd(a, b)

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    ans = 1
    for i in range(2, n+1):
        ans = lcm(ans, i)
    print(ans)
