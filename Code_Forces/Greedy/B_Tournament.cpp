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
    int n, j, k;
    cin >> n >> j >> k;
    int a[n];
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    if (k >= 2)
        Yes;
    else
    {
        if (a[j - 1] == mx)
            Yes;
        else
            No;
    }
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