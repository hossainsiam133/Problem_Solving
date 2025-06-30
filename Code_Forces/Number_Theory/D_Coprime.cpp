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

const int mx = 1e3;
vector<int> coPrimes[mx + 1];
void solve()
{
    int n;
    cin >> n;
    vector<int> v[mx + 1];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x].push_back(i);
    }
    int ans = -1;
    for (int i = 1; i <= mx; i++)
    {
        for (int j : coPrimes[i])
        {
            if (!v[i].empty() && !v[j].empty())
            {
                ans = max(ans, v[i].back() + v[j].back());
            }
        }
    }
    cout << ans << nline;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i <= mx; i++)
    {
        for (int j = 1; j <= mx; j++)
        {
            if (__gcd(i, j) == 1)
                coPrimes[i].push_back(j);
        }
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
