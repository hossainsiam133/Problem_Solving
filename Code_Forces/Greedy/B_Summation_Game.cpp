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
    int n, k, x;
    cin >> n >> k >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll pre_sum[n + 1];
    pre_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + a[i - 1];
    }
    ll mx = -INT_MAX;
    for (int i = 0; i <= k; i++)
    {
        ll cal = pre_sum[max(0, n - i - x)] - (pre_sum[n - i] - pre_sum[max(0, n - i - x)]);
        mx = max(mx, cal);
    }
    cout << mx << nline;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << pre_sum[i] << ' ';
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