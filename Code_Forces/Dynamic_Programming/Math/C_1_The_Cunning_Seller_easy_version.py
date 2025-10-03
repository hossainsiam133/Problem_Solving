# https://codeforces.com/contest/2132/problem/C1
test = int(input())
for _ in range(test):
    n = int(input())
    cost = 0
    p = 1
    x = 0
    while p * 3 <= n:
        p *= 3
        x += 1
    while n > 0:
        num_deals = n // p
        if num_deals > 0:
            if x == 0:
                deal_cost = 3
            else:
                deal_cost = 3 * p + x * (p // 3)
            cost += num_deals * deal_cost
        n %= p
        p //= 3
        x -= 1
    print(cost)
