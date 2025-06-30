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

bool is_prime(ll n)
{
    if (n <= 1)
        return 1;
    else if (n == 2 or n == 3)
        return 1;
    else if (n % 2 == 0)
        return 0;
    else
        for (ll b = 3; b * b <= n; b += 2)
        {
            if (n % b == 0)
                return 0;
        }
    return 1;
}
void solve()
{
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (!is_prime(i))
        {
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    cout << i - j << ' ' << j << nline;
                    return;
                }
            }
        }
    }
    cout << -1 << nline;
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
