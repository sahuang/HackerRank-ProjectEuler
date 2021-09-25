# https://www.hackerrank.com/contests/projecteuler/challenges/euler007/problem

#!/bin/python3

import sys

def n_prime_numbers(n):
    prime_list = [2]

    num = 3
    while len(prime_list) < n:
        for p in prime_list:
            if num % p == 0:
                break

        # if it is a prime, then add it to the list
        else:
            # append to prime list
            prime_list.append(num)

        # same optimization you had, don't check even numbers
        num += 2

    return prime_list

t = int(input().strip())
prime_list = n_prime_numbers(10000)
for a0 in range(t):
    n = int(input().strip())
    print(prime_list[n-1])