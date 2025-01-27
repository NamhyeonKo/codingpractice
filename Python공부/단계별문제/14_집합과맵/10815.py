#! 숫자 카드
N = int(input())
num_n = list(map(int, input().split()))
M = int(input())
num_m = list(map(int, input().split()))

set_num_n = set(num_n)
set_num_m = set(num_m)

set_intersection = set_num_n & set_num_m

hash_num_m = {}
for num in num_m:
    if num in set_intersection:
        hash_num_m[num] = 1
    else:
        hash_num_m[num] = 0

for h_n_m in hash_num_m.values():
    print(h_n_m, end=' ')