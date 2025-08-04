// https://atcoder.jp/contests/dp/tasks/dp_b
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
const int MX = 1e5 + 123;
int h[MX], N, k;
int dp[MX];
int func(int n)
{
    if (n == 1)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int cost = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        if (n - i >= 1)
            cost = min(cost, func(n - i) + abs(h[n] - h[n - i]));
    }
    dp[n] = cost;
    return dp[n];
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> N >> k;
    for (int i = 1; i <= N; i++)
    {
        cin >> h[i];
    }
    cout << func(N) << nline;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}