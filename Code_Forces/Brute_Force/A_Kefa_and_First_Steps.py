# https://codeforces.com/contest/580/problem/A
n = int(input())
a = list(map(int, input().split()))
cnt = 0
cmp = -1
ans = 0
for i in range(n):
    if a[i] >= cmp:
        cnt += 1
        cmp = a[i]
    else:
        cnt = 1
        cmp = a[i]
    ans = max(ans, cnt)

print(ans)
