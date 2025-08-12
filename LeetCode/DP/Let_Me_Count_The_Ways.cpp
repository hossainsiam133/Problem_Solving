// https://vjudge.net/problem/uva-357#author=0
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define nline "\n"
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define ff first
#define ss second
vector<int> a = {1, 5, 10, 25, 50};
ll dp[10][30010];
ll func(int ind, int amounts)
{
    if (amounts == 0)
        return 1;
    if (ind < 0)
        return 0;
    if (dp[ind][amounts] != -1)
        return dp[ind][amounts];
    ll way = 0;
    for (int coin = 0; coin <= amounts; coin += a[ind])
    {
        way += func(ind - 1, amounts - coin);
    }
    return dp[ind][amounts] = way;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(dp, -1, sizeof(dp));
    int n;
    while (cin >> n)
    {
        ll ways = func(a.size() - 1, n);
        if (ways > 1)
            cout << "There are " << ways << " ways to produce " << n << " cents change." << nline;
        else
            cout << "There is only " << ways << " way to produce " << n << " cents change." << nline;
    }
    return 0;
}