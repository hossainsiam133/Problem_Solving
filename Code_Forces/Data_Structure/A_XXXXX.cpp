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
    int n, x;
    cin >> n >> x;
    vi v(n);
    ll sum = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % x != 0)
            flag = false;
        sum += v[i];
    }
    if (sum % x != 0)
    {
        cout << n << endl;
        return;
    }
    if (flag)
    {
        cout << -1 << endl;
        return;
    }
    int left = n;
    ll tsum = sum;
    for (int i = 0; i < n; i++)
    {
        tsum -= v[i];
        left--;
        if (tsum % x != 0)
            break;
    }
    tsum = sum;
    int right = n;
    for (int i = n - 1; i >= 0; i--)
    {
        tsum -= v[i];
        right--;
        if (tsum % x != 0)
            break;
    }
    cout << max(left, right) << endl;
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
