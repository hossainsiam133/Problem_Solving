// https://codeforces.com/contest/1808/problem/B
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
    int a[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[j][i];
        }
    }
    swap(n, m);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        sort(a[i], a[i] + m);
        vector<ll> sum(m, 0LL);
        sum[m - 1] = a[i][m - 1];
        for (int j = m - 2; j >= 0; j--)
        {
            sum[j] = sum[j + 1] + a[i][j];
            // cout<< sum[j] << ' ';
        }
        for (int k = 0; k < m - 1; k++)
        {
            ll cnt = sum[k + 1] - 1LL * (m - 1 - k) * a[i][k];
            ans += cnt;
        }
    }
    cout << ans << nline;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}