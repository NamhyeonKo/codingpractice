#집합
import sys

M = int(sys.stdin.readline().strip())

s = set()

for _ in range(M):
    command = sys.stdin.readline().strip().split()

    if command[0] == 'add':
        s.add(int(command[1]))
    elif command[0] == 'remove':
        s.discard(int(command[1]))
    elif command[0] == 'check':
        print(1 if int(command[1]) in s else 0)
    elif command[0] == 'toggle':
        if int(command[1]) in s:
            s.discard(int(command[1]))
        else:
            s.add(int(command[1]))
    elif command[0] == 'all':
        s = set([i for i in range(1, 21)])
    else:
        s = set()