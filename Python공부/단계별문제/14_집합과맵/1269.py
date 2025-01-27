#대칭 차집합
import sys
n , m = map(int, sys.stdin.readline().split())

a = list(map(int, sys.stdin.readline().split()))
b = list(map(int, sys.stdin.readline().split()))

a_sub_b = set(a) - set(b)
b_sub_a = set(b) - set(a)

print(len(a_sub_b) + len(b_sub_a))