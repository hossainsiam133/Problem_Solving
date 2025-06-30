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
        return 0;
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
    ll n, k;
    cin >> n >> k;
    // string s = to_string(n);
    // string mn = s;
    // for (int i = 0; i < k - 1; i++)
    // {
    //     s += mn;
    // }
    // ll num = stoll(s);
    if (k == 1 && is_prime(n) || n == 1 && k == 2)
        Yes;
    else
        No;
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
