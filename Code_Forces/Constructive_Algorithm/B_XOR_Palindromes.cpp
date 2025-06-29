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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int miss = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            miss++;
    }
    for (int i = 0; i <= n; i++)
    {
        if (i >= miss && i <= n - miss)
        {
            cout << 1;
            if (n % 2 == 0 && i + 1 <= n - miss)
            {
                cout << 0;
                i++;
            }
        }
        else
            cout << 0;
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