#숫자 카드 2
import sys
from collections import Counter

n = int(sys.stdin.readline())
n_cards_list = list(map(int,sys.stdin.readline().split()))

cards_counter = Counter(n_cards_list)

m = int(sys.stdin.readline())

m_cards_list = list(map(int,sys.stdin.readline().split()))

for card in m_cards_list:
    print(cards_counter.get(card,0), end=' ')