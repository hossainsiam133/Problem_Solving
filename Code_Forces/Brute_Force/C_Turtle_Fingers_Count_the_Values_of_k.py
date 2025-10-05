# https://codeforces.com/problemset/problem/1933/C
case = int(input())
for _ in range(case):
    a, b, l = map(int, input().split())
    st = set()
    for i in range(500000 + 1):
        if a**i > l:
            break
        for j in range(500000 + 1):
            cal = (a**i) * (b**j)
            if cal > l:
                break
            if l % cal == 0:
                st.add(l / cal)
    print(len(st))
