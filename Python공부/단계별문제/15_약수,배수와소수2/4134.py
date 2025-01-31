#다음 소수
import sys

def is_prime_number(x):
    for i in range(2, int(x**0.5) + 1):
        if x % i == 0:
            return False
    return True

t = int(sys.stdin.readline())

for _ in range(t):
    n = int(sys.stdin.readline())
    if n == 0 or n == 1:
        print(2)
        continue
    for i in range(n, 4*(10**9) + 8):
        if is_prime_number(i):
            print(i)
            break