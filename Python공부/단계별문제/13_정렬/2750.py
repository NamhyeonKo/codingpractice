#수 정렬하기
import sys

n = int(sys.stdin.readline())

num = []

for _ in range(n):
    num.append(int(sys.stdin.readline()))

num.sort()

for i in range(n):
    print(num[i])