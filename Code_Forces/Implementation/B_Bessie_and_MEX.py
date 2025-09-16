# https://codeforces.com/contest/1942/problem/B
case = int(input())
for _ in range(case):
    n = int(input())
    a = list(map(int, input().split()))
    p = [0] * n
    has = [False] * (n + 1)
    mex = 0
    # print(len(p))
    for i in range(n):
        if a[i] >= 0:
            p[i] = mex
        else:
            p[i] = mex - a[i]
        has[p[i]] = True
        while has[mex] == True:
            mex += 1
    for x in p:
        print(x, end=" ")
    print()
