#구간 합 구하기 4

import sys

N, M = map(int, sys.stdin.readline().split())
numbers = list(map(int, sys.stdin.readline().split()))

sum = [0] * 100000
sum[0] = numbers[0]

for i in range(1, N):
    sum[i] = sum[i-1] + numbers[i]

for _ in range(M):
    a, b = map(int, sys.stdin.readline().split())
    print(sum[b-1] if a == 1 else sum[b-1] - sum[a-2])