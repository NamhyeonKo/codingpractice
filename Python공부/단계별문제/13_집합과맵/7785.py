#회사에 있는 사람
n = int(input())
hash_workers = {}

for _ in range(n):
    name, status = input().split()
    if status == 'enter':
        hash_workers[name] = 1
    else:
        del hash_workers[name]

hash_workers = sorted(hash_workers.keys(), reverse=True)
for worker in hash_workers:
    print(worker)