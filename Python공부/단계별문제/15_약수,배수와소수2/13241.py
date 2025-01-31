#최소공배수
import sys

def gcd(a, b):
    while b != 0:
        result = b
        a, b = b, a % b
    return result

def lcm(a, b):
    return (a // gcd(a, b)) * b

a, b = map(int, sys.stdin.readline().split())

print(lcm(a, b))