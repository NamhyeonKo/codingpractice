#분수 합
import sys

def uclid_gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

a = list(map(int, sys.stdin.readline().split()))
b = list(map(int, sys.stdin.readline().split()))

gcd_val = uclid_gcd(a[1], b[1])

for i in range(2):
    a[i] *= b[1] // gcd_val
    b[i] *= a[1] // gcd_val

sum_val = [a[0] + b[0], a[1]]
gcd_val = uclid_gcd(sum_val[0], sum_val[1])

print(sum_val[0] // gcd_val, sum_val[1] // gcd_val)