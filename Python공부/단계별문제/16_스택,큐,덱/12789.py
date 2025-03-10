#도키도키 간식드리미
import sys

n = int(sys.stdin.readline())

lines = list(map(int,sys.stdin.readline().split()))
stack = []
correct_line = []

for man in lines:
    if len(correct_line) + 1 == man:
        correct_line.append(man)
    else:
        stack.append(man)
    
    while stack and stack[-1] == len(correct_line) + 1:
        correct_line.append(stack.pop())

if stack:
    print("Sad")
else:
    print("Nice")