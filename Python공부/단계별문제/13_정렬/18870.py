#좌표 압축
import sys

n = int(sys.stdin.readline())

points = list(map(int, sys.stdin.readline().split()))

sorted_points = sorted(set(points))
compressed_points = {sorted_points[i]: i for i in range(len(sorted_points))}

for point in points:
    print(compressed_points[point], end=' ')