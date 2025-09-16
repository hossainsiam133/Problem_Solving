// https://atcoder.jp/contests/dp/tasks/dp_d
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
int N, W;
int w[123], v[123];
long long dp[123][mx];
long long solve(int i, int currW)
{
    if (i > N)
        return 0;
    if (dp[i][currW] != -1)
        return dp[i][currW];
    long long ret1 = 0, ret2 = 0;
    if (w[i] + currW <= W)
        ret1 = v[i] + solve(i + 1, w[i] + currW);
    ret2 = 0 + solve(i + 1, currW);
    return dp[i][currW] = max(ret1, ret2);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> W;
    for (int i = 1; i <= N; i++)
    {
        cin >> w[i] >> v[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << solve(1, 0) << nline;
    return 0;
}