#음계
a = list(map(int, input().split(' ')))

if a[0] == 1:
    for i in range(len(a)):
        if a[i] != i+1:
            print('mixed')
            exit(0)
    print('ascending')
elif a[0] == 8:
    for i in range(len(a)):
        if a[i] != 8-i:
            print('mixed')
            exit(0)
    print('descending')
else:
    print('mixed')