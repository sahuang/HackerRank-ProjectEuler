# https://www.hackerrank.com/contests/projecteuler/challenges/euler004

#!/bin/python3

import sys

t = int(input().strip())

pal = []
for i in range(100, 1000):
    for j in range(i, 1000):
        num = str(i*j)
        if num == num[::-1]:
            pal.append(int(num))
pal.sort()
 
for a0 in range(t):
    n = int(input().strip())
    # largest in pal <= n
    for i in range(len(pal)-1, -1, -1):
        if pal[i] < n:
            print(pal[i])
            break
    
