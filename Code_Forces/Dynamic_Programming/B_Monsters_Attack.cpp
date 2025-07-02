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
    int n, k;
    cin >> n >> k;
    int a[n];
    vector<ll> x(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int y;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        x[abs(y)] += a[i];
    }
    ll left = 0;
    for (int i = 1; i <= n; i++)
    {
        left += k - x[i];
        if (left < 0)
        {
            No;
            return;
        }
    }
    Yes;
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
