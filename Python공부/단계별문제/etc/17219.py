#비밀번호 찾기
import sys

N, M = map(int, sys.stdin.readline().split())

password = {}

for _ in range(N):
    site, pw = sys.stdin.readline().split()
    password[site] = pw

for _ in range(M):
    site = sys.stdin.readline().strip()
    print(password[site])