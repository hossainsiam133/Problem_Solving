test = int(input())
for _ in range(test):
    n = int(input())
    a = list(map(int, input().split()))
    arr = sorted(a)
    arr = list(reversed(arr))
    # print(arr)
    ans = 0
    i = 0
    while i < n - 1:
        ans += max(arr[i], arr[i + 1])
        i += 2
    if n & 1:
        ans += arr[len(arr) - 1]
    print(ans)
