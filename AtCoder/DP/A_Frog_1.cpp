// https: // atcoder.jp/contests/dp/tasks/dp_a
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
const int mx = 1e5 + 123;
int h[mx];
int dp[mx];
int func(int n)
{
    if (n == 1)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int dis1 = INT_MAX;
    int dis2 = INT_MAX;
    dis1 = func(n - 1) + abs(h[n] - h[n - 1]);
    if (n > 2)
        dis2 = func(n - 2) + abs(h[n] - h[n - 2]);
    dp[n] = min(dis1, dis2);
    return dp[n];
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    cout << func(n) << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<< dp[i] << ' ';
    // }
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