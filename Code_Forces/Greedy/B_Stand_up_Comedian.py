# https://codeforces.com/problemset/problem/1792/B
test = int(input())
for _ in range(test):
    a,b,c,d = map(int,input().split())
    if(a == 0):
        print(1)
    else:
        ans = a+min(b,c)*2+min(a+1,abs(b-c)+d)
        print(ans)