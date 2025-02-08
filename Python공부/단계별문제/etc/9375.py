#패션왕 신해빈
import sys

T = int(sys.stdin.readline())

for _ in range(T):
    n = int(sys.stdin.readline())
    clothes = {}
    for _ in range(n):
        name, kind = sys.stdin.readline().split()
        if kind in clothes:
            clothes[kind] += 1
        else:
            clothes[kind] = 1
    answer = 1
    for value in clothes.values():
        answer *= value + 1
    print(answer - 1)