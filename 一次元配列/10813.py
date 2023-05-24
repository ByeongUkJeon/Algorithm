N, M = input().split()
basket = [i + 1 for i in range(int(N))]
for x in range(int(M)):
    i, j = map(int,input().split())
    tmp = basket[i - 1]
    basket[i - 1] = basket[j - 1]
    basket[j - 1] = tmp

print(*basket)