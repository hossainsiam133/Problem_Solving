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
    int a[n + 1];
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[x] = i;
    }
    int cnt = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] > a[i + 1])
            cnt++;
    }
    cout << cnt << nline;
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