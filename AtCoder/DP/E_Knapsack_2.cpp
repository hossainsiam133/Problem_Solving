// https://atcoder.jp/contests/dp/tasks/dp_e
#include <bits/stdc++.h>
using namespace std;
long long n, W;
long long w[123], p[123];
const int mx = 1e5 + 123;
long long dp[123][mx];
long long solve(int i, long long cp)
{
    if (cp == 0)
        return 0;
    if (i < 1)
        return 1e15;
    if (dp[i][cp] != -1)
        return dp[i][cp];
    long long ans = solve(i - 1, cp);
    if (cp - p[i] >= 0)
        ans = min(ans, w[i] + solve(i - 1, cp - p[i]));
    return dp[i][cp] = ans;
}
int main()
{
    cin >> n >> W;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> p[i];
    }
    memset(dp, -1, sizeof(dp));
    for (int i = 1e5+123; i >= 0; i--)
    {
        if (solve(n, i) <= W)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}