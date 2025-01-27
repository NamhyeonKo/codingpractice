#문자열 집합
from collections import Counter
n, m = map(int, input().split())

str_n = [input() for _ in range(n)]
str_m = [input() for _ in range(m)]

set_str_n = set(str_n)
sum_str_m = Counter(str_m)

answer = 0
for k, v in sum_str_m.items():
    if k in str_n:
        answer += v

print(answer)