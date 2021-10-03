# https://www.hackerrank.com/contests/projecteuler/challenges/euler020/problem

#!/bin/python3

import sys
import math

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    print(sum(int(i) for i in str(math.factorial(n))))