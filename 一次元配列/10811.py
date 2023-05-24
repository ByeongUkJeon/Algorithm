N, M = input().split()
basket = [i + 1 for i in range(int(N))]
for x in range(int(M)):
    i, j = map(int,input().split())
    for y in range(int((j-i+1)/2)):
        tmp = basket[i - 1]
        basket[i - 1] = basket[j - 1]
        basket[j - 1] = tmp
        i += 1;
        j -= 1;

print(*basket)
