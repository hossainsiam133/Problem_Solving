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
const int MX = 1e6 + 123;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            v.push_back(mn);
        }
    }
    int mx = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            v.push_back(mx);
        }
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << ' ';
    // }
    // cout << nline;
    bool flag[MX];
    memset(flag, 0, sizeof(flag));
    for (int i = 0; i < v.size(); i++)
    {
        flag[v[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        cout << flag[a[i]];
    }
    cout << nline;
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