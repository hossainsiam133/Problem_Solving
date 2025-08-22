# https://codeforces.com/contest/2132/problem/B
test = int(input())
for _ in range(test):
    n = int(input())
    p = 10
    li = []
    for j in range(18):
        s = p + 1
        if n % s == 0:
            li.append(n // s)
        p *= 10
    if len(li):
        li.sort()
        print(len(li))
        for x in li:
            print(x, end=" ")
        print()
    else:
        print(0)
