# https://codeforces.com/contest/1520/problem/D
test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))
    mp = {}
    for i in range(n):
        x = arr[i] - i
        mp[x] = mp.get(x, 0) + 1
    ans = 0
    for key in mp:
        ans += (mp[key] * (mp[key] - 1)) // 2
    print(ans)
