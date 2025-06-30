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
    ll n;
    cin >> n;
    int a = 1;
    int sq = sqrt(n);
    for (int i = 2; i <= sq; i++)
    {
        if (n % i == 0)
        {
            a = n / i;
            break;
        }
    }
    cout << a << ' ' << n - a << endl;
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
