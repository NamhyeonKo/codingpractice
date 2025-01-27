#좌표 정렬하기
import sys

n = int(sys.stdin.readline())

points = []

for _ in range(n):
    x, y = map(int, sys.stdin.readline().split())
    points.append((x, y))

points.sort()

for i in range(n):
    print(points[i][0], points[i][1])