// https://toph.co/p/sudden-tour
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
int w[110], p[110];
int n, c;
int dp[110][100020];
int solve(int i, int cw)
{
    if (i > n)
        return 0;
    if (dp[i][cw] != -1)
        return dp[i][cw];
    int p0 = 0, p1 = 0;
    p0 = solve(i + 1, cw);
    if (cw + w[i] <= c)
        p1 = p[i] + solve(i + 1, cw + w[i]);
    return dp[i][cw] = max(p0, p1);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        cin >> n >> c;
        for (int i = 1; i <= n; i++)
        {
            cin >> w[i] >> p[i];
        }
        memset(dp, -1, sizeof(dp));
        cout << "Case " << test << ": " << solve(1, 0) << nline;
    }

    return 0;
}