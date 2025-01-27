#소트인사이드
import sys

n = sys.stdin.readline().rstrip()
n = sorted(n, reverse=True)

print(''.join(n))