# https://codeforces.com/contest/2140/problem/A
test = int(input())
for _ in range(test):
    n = int(input())
    s = input()
    zero = s.count("0")
    ans = zero
    for i in range(zero):
        if s[i] == "0":
            ans -= 1
    print(ans)
