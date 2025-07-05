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

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    int array[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            array[i][j] = a[i][j];
        }
    }
    ll maxi = -1;
    int mx_row = 1, mx_col = 1;
    int mxr = 1, mxc = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] > maxi)
            {
                maxi = a[i][j];
                mx_col = j;
                mxr = i;
            }
        }
    }
    maxi = -1;
    int maxi2 = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] > maxi && j != mx_col)
            {
                maxi = a[i][j];
                mx_row = i;
            }
            if (a[i][j] > maxi2 && i != mxr)
            {
                maxi2 = a[i][j];
                mxc = j;
            }
        }
    }
    // cout << mx_row << ' ' << mx_col << nline;
    for (int j = 1; j <= m; j++)
    {
        a[mx_row][j] -= 1;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i][mx_col] -= 1;
    }
    a[mx_row][mx_col] += 1;
    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ans = max(ans, a[i][j]);
        }
    }
    // 2nd ope
    for (int j = 1; j <= m; j++)
    {
        array[mxr][j] -= 1;
    }
    for (int i = 1; i <= n; i++)
    {
        array[i][mxc] -= 1;
    }
    array[mxr][mxc] += 1;
    int ans2 = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ans2 = max(ans2, array[i][j]);
        }
    }
    cout << min(ans, ans2) << nline;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}