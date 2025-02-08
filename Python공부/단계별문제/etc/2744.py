#대소문자 바꾸기
import sys

s  = sys.stdin.readline().strip()
result = ''

for i in s:
    if i.islower():
        result += i.upper()
    else:
        result += i.lower()

print(result)