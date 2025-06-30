#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define mid(l, r) ((r + l) / 2)

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

void solve()
{
    int n;
    cin >> n;
    map<ll, ll> mp;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int c = 0;
            while (n % i == 0)
            {
                c++;
                n /= i;
                if (mp.count(c) == 0)
                {
                    mp[c] = i;
                }
                else
                {
                    mp[c] *= i;
                }
            }
        }
    }
    if (n != 1)
    {
        if (mp.count(1) == 0)
            mp[1] = n;
        else
            mp[1] *= n;
    }
    ll ans = 0;
    map<ll, ll>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        ans += it->second;
    }
    cout << ans << endl;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
