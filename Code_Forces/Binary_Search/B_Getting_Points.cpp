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
    ll n, p, l, t;
    cin >> n >> p >> l >> t;
    ll a = n / 7;
    if (n % 7 != 0)
        a++;
    ll lo = 1, high = n;
    int ans = 0;
    while (lo <= high)
    {
        ll mid = (lo + high) / 2;
        ll x = mid * l + t * min(2 * mid, a);
        if (p <= x)
        {
            high = mid - 1;
            ans = mid;
        }
        else
            lo = mid + 1;
    }
    cout << n - ans << nline;
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
