#나는야 포켓몬 마스터 이다솜
import sys
n , m = map(int, sys.stdin.readline().split())

hash_pokemons_for_name = {}
pokemons_for_num = []

for i in range(n):
    pokemon = sys.stdin.readline().strip()
    pokemons_for_num.append(pokemon)
    hash_pokemons_for_name[pokemon] = i+1

for i in range(m):
    q = sys.stdin.readline().strip()
    if q.isdigit():
        print(pokemons_for_num[int(q)-1])
    else:
        print(hash_pokemons_for_name[q])