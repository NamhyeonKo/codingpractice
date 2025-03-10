# 스택 2
import sys

N = int(sys.stdin.readline())
stack = []

for i in range(N):
    a = list(map(int,sys.stdin.readline().split()))
    if a[0] == 1:
        stack.append(a[1])
    elif a[0] == 2:
        if stack:
            print(stack.pop())
        else:
            print(-1)
    elif a[0] == 3:
        print(len(stack))
    elif a[0] == 4:
        if stack:
            print(0)
        else:
            print(1)
    elif a[0] == 5:
        if stack:
            print(stack[-1])
        else:
            print(-1)