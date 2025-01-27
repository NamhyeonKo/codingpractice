#서로 다른 부분 문자열의 개수
import sys

string = sys.stdin.readline().strip()
n = len(string)

string_list = []
for i in range(n):
    for j in range(i,n):
        string_list.append(string[i:j+1])

print(len(set(string_list)))