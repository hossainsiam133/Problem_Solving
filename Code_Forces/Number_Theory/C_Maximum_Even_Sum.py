from math import isqrt

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    x = 0
    if b % 2 == 0:
        x = a * (b // 2) + 2
    else:
        x = a * b + 1
    if x & 1:
        print(-1)
    else:
        print(x)
