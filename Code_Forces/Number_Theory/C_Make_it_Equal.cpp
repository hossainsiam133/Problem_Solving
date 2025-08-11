// https://codeforces.com/contest/2131/problem/C
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
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = max(a[i] % k, k - a[i] % k);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b[i] = max(b[i] % k, k - b[i] % k);
    }
    sort(a, a + n);
    sort(b, b + n);
    if (equal(a, a + n, b))
        Yes;
    else
        No;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << ' ';
    // }
    // cout << nline;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << b[i] << ' ';
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