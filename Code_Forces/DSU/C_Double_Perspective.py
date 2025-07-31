# https://codeforces.com/contest/2130/problem/C
class DSU:
    def __init__(self, size):
        self.parent = list(range(size + 1))

    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, x, y):
        fx = self.find(x)
        fy = self.find(y)
        if fx == fy:
            return False
        self.parent[fy] = fx
        return True


t = int(input())
for _ in range(t):
    n = int(input())
    pairs = [tuple(map(int, input().split())) for _ in range(n)]

    dsu = DSU(2 * n)
    selected = []

    for i, (u, v) in enumerate(pairs):
        if dsu.union(u, v):
            selected.append(i + 1)

    print(len(selected))
    print(*selected)
