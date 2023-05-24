N, M = input().split()
basket = [0 for i in range(int(N))]
for x in range(int(M)):
    i, j, k = input().split()
    for y in range(int(i), int(j)+1):
        basket[y - 1] = int(k)

print(*basket)