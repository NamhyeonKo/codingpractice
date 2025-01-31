#골드바흐 파티션
import sys

is_prime = [True] * (1000000 + 1)
is_prime[0] = is_prime[1] = False

for i in range(2, int(1000000**0.5) + 1):
    if is_prime[i]:
        for j in range(i*2, 1000000 + 1, i):
            is_prime[j] = False

T = int(sys.stdin.readline())

for _ in range(T):
    n = int(sys.stdin.readline())
    goldbach_list = []
    for i in range(n//2, 1, -1):
        if is_prime[i] and is_prime[n-i]:
            goldbach_list.append((i, n-i))
    print(len(set(goldbach_list)))