# https://codeforces.com/contest/2133/problem/A
test = int(input())
for _ in range(test):
    n = int(input())
    a = set(map(int, input().split()))
    if len(a) != n:
        print("YES")
    else:
        print("NO")
