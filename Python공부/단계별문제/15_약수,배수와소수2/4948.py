#베르트랑 공준
import sys

is_prime = [True] * (123456*2 + 1)
is_prime[0] = is_prime[1] = False

for i in range(2, int((123456*2)**0.5) + 1):
    if is_prime[i]:
        for j in range(i*2, 123456*2 + 1, i):
            is_prime[j] = False

while True:
    n = int(sys.stdin.readline())
    if n == 0:
        break
    cnt = 0
    for k in range(n + 1, 2*n + 1):
        if is_prime[k]:
            cnt += 1
    print(cnt)