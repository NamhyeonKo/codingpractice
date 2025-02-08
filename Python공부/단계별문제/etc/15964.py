#이상한 기호

def solve(a, b):
    return (a+b)*(a-b)

a, b = map(int, input().split())
print(solve(a, b))