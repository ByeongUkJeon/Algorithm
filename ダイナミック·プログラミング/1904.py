ary = [0 for _ in range(1000001)]
ary[0] = 1
ary[1] = 2
n = int(input())
def f(n):
    if(ary[n] == 0):
        for i in range(2, n):
            ary[i] = (ary[i-1] + ary[i-2]) % 15746
    return ary[n-1]
print(f(n))
