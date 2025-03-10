#균형잡힌 세상
import sys

while True:
    s = list(sys.stdin.readline())

    if s[0] == '.':
        break

    par = []

    for l in s:
        if l == '(' or l == '[':
            par.append(l)
        elif l == ')' or l == ']':
            if par:
                if l == ')' and par[-1] == '(':
                    par.pop()
                elif l == ']' and par[-1] == '[':
                    par.pop()
                else:
                    break
            else:
                par.append(l)
                break

    if par:
        print('no')
    else:
        print('yes')