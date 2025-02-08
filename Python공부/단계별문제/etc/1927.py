#최소 힙
import sys
import heapq

N = int(sys.stdin.readline())

heap = []

for _ in range(N):
    x = int(sys.stdin.readline())
    if x != 0:
        heapq.heappush(heap, x)
    else:
        if not heap:
            print(0)
        else:
            print(heapq.heappop(heap))