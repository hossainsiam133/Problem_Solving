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
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll pre_sum[n + 1];
    pre_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + a[i];
    }
    ll sum = pre_sum[n];
    ll mx = -1;
    for (int i = 2; i <= n; i++)
    {
        ll gc = __gcd(sum - pre_sum[i - 1], pre_sum[i - 1]);
        if (gc > mx)
            mx = gc;
    }
     cout << mx << nline;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      cout << pre_sum[i] << ' ';
    //  }
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
