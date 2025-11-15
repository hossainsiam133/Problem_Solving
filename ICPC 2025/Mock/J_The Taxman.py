test = int(input())
for _ in range(test):
    n = float(input())
    l = 0
    r = 1e16 + 10
    ans = -1
    for _ in range(300):
    # while(l <= r):
        mid = (l + r) * 0.5
        tex = 0
        if mid > 100000:
            red = (mid - 100000) / 2
            mid -= red
            mid = max(0, mid)
            tex += red * 0.4
        if mid > 12500 and mid <= 50000:
            tex += mid * 0.20
        elif mid > 50000 and mid <= 150000:
            tex += mid * 0.40
        else:
            tex += mid * 0.45
        # print(tex)
        if abs(tex - n) <= 1e-6:
            print(tex,n)
            ans = mid
            # break
        elif tex > n:
            r = mid - 1e-6
        else:
            l = mid + 1e-6
    print(ans)
