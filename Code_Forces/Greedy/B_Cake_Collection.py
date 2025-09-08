case = int(input())
for _ in range(case):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    a = sorted(a, reverse=True)
    k = min(n, m)
    ans = 0
    for i in range(k):
        ans += a[i] * (m - i)
    print(ans)
