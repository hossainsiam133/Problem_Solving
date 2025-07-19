test = int(input())
for test in range(test):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    cnt = 0
    ans = 0
    i = 0
    while i < n:
        if a[i] == 0:
            cnt += 1
            if cnt == k:
                # print(i, cnt)
                i += 1
                ans += 1
                cnt = 0
        else:
            cnt = 0
        i += 1

    print(ans)
