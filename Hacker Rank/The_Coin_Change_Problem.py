# https://www.hackerrank.com/challenges/coin-change/problem
n = -1
m = -1
coins = []
dp = [[]]


def func(ind, amounts):
    if amounts == 0:
        return 1
    if ind < 0:
        return 0
    if dp[ind][amounts] != -1:
        return dp[ind][amounts]
    way = 0
    for i in range(0, amounts + 1, coins[ind]):
        way += func(ind - 1, amounts - i)
    dp[ind][amounts] = way
    return dp[ind][amounts]


n, m = map(int, input().split())
coins = list(map(int, input().split()))
dp = [[-1 for _ in range(n + 100)] for _ in range(m + 100)]
print(func(m - 1, n))
