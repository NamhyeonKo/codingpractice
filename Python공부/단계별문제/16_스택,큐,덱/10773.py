#제로
import sys

k = int(sys.stdin.readline())
num = []

for _ in range(k):
    new = int(sys.stdin.readline())
    if new == 0:
        num.pop()
    else:
        num.append(new)

print(sum(num))