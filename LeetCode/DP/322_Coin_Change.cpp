// https://leetcode.com/problems/coin-change/description/
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
const int N = 1e4 + 10;
int dp[N];
int func(vector<int> &coins, int amounts)
{
    if (amounts == 0)
        return 0;
    if (dp[amounts] != -1)
        return dp[amounts];
    ll ans = INT_MAX;
    for (int coin : coins)
    {
        if (amounts - coin >= 0)
            ans = min(ans, func(coins, amounts - coin) + 1ll);
    }
    return dp[amounts] = ans;
}
int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(coins, amount);
    return ans == INT_MAX ? -1 : ans;
}
void solve()
{
    vector<int> coin = {2, 5, 7};
    int amount = 11;
    cout << coinChange(coin, amount) << nline;
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