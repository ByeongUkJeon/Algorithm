ary = [[[1 for _ in range(21)] for _ in range(21)] for _ in range(21)]
for x in range(0, 2):
    for y in range(0, 2):
        for z in range(0, 2):
            ary[x][y][z] = 1
for x in range(1, 21):
    for y in range(1, 21):
        for z in range(1, 21):
            if x < y and y < z:
                ary[x][y][z] = ary[x][y][z-1] + ary[x][y-1][z-1] - ary[x][y-1][z]
            else:
                ary[x][y][z] = ary[x-1][y][z] + ary[x-1][y-1][z] + ary[x-1][y][z-1] - ary[x-1][y-1][z-1]

while True:
    A, B, C = list(map(int, input().split()))
    if A == B == C == -1:
        break
    if A <= 0 or B <= 0 or C <= 0:
        print('w(%d, %d, %d) =' % (A, B, C), 1)
        continue
    elif A > 20 or B > 20 or C > 20:
        print('w(%d, %d, %d) =' % (A, B, C), ary[20][20][20])
        continue

    print('w(%d, %d, %d) =' % (A, B, C), ary[A][B][C])
