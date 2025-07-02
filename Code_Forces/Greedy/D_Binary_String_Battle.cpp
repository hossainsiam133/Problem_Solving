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
    string s;
    cin >> s;
    if (2 * k > n)
        cout << "Alice" << nline;
    else
    {
        if (count(all(s), '1') <= k)
            cout << "Alice" << nline;
        else
            cout << "Bob" << nline;
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