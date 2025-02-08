#검증수
def check_digit(n):
    return sum([int(i)**2 for i in n])%10

a = list(map(int, input().split()))
print(check_digit(a))