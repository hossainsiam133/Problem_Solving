# https://codeforces.com/problemset/problem/1971/D
case = int(input())
for _ in range(case):
    s = input()
    n = len(s)
    ans = 1
    cnt = 0
    for i in range(1, n):
        if s[i] < s[i - 1]:
            ans += 1
        if s[i] == "1" and s[i - 1] == "0":
            cnt += 1
    if cnt:
        print(ans + cnt - 1)
    else:
        print(ans)
