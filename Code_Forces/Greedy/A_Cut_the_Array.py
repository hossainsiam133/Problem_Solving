# https://codeforces.com/contest/2144/problem/A
case = int(input())
for _ in range(case):
    n = int(input())
    a = list(map(int, input().split()))
    sum = 0
    for i in range(n - 2):
        sum += a[i]
    st = set()
    st.add(sum % 3)
    st.add(a[n - 2] % 3)
    st.add(a[n - 1] % 3)
    if len(st) == 3 or len(st) == 1:
        print(n - 2, n - 1)
    else:
        print(0, 0)
