#듣보잡
import sys

n, m = map(int, sys.stdin.readline().split())

neverheard = []

for _ in range(n):
    neverheard.append(sys.stdin.readline().strip())

neverseen = []
for _ in range(m):
    neverseen.append(sys.stdin.readline().strip())

result = sorted(list(set(neverheard) & set(neverseen)))

print(len(result))
for name in result:
    print(name)