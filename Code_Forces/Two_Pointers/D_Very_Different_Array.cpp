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
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    reverse(b, b + m);
    int i = 0, j = n - 1, l = 0, r = m - 1;
    ll ans = 0;
    while (i <= j)
    {
        int left = abs(a[i] - b[l]);
        int right = abs(a[j] - b[r]);
        int mx = max(left, right);
        ans += mx;
        if (mx == left)
        {
            i++;
            l++;
        }
        else if(mx == right)
        {
            j--;
            r--;
        }
    }
    cout << ans << nline;
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
