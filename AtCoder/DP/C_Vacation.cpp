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
int a[MX][4];
int R;
int dp[MX][4];
int func(int r, int c)
{
    if (r > R)
        return 0;
    if (dp[r][c] != -1)
        return dp[r][c];
    int cost = -1;
    for (int j = 1; j <= 3; j++)
    {
        if (j != c)
        {
            cost = max(cost, a[r][j] + func(r + 1, j));
        }
        // for (int j = r; j <= R; j++)
        // {

        // }
    }
    dp[r][c] = cost;
    return cost;
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> R;
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << func(1, 0) << nline;
    // for (int i = 1; i <= R; i++)
    // {
    //     for (int j = 1; j <= 3; j++)
    //     {
    //         cout << a[i][j] << ' ';
    //     }
    //     cout << nline;
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