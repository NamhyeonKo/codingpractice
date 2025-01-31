#가로수
import sys

n = int(sys.stdin.readline())
trees = [int(sys.stdin.readline()) for _ in range(n)]

diff = [trees[i] - trees[i - 1] for i in range(1, n)]

min_diff = min(diff)
min_diff_list = []
for i in range(1, int(min_diff**(1/2)) + 1):
    if min_diff % i == 0:
        min_diff_list.append(i)
        if ( (i**2) !=  min_diff):
            min_diff_list.append(min_diff // i)
min_diff_list.sort(reverse=True)

dif = 1
for m in min_diff_list:
    if all([d % m == 0 for d in diff]):
        dif = m
        break
    else:
        continue

count = ((trees[-1] - trees[0]) // dif) + 1 - n
print(count)