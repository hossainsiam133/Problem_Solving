# https://codeforces.com/contest/1373/problem/B
test = int(input())
for test in range(test):
    s = input()
    n = len(s)
    cnt_1 = s.count("1")
    cnt_0 = s.count("0")
    cnt = min(cnt_1, cnt_0)
    if cnt & 1:
        print("DA")
    else:
        print("NET")
