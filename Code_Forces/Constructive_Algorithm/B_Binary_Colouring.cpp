// https://codeforces.com/contest/1977/problem/B
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
    vi ans;
    while (n > 0)
    {
        if (n % 2 == 0)
            ans.push_back(0);
        else if ((n - 1) % 4 == 0)
        {
            ans.push_back(1);
            n -= 1;
        }
        else
        {
            ans.push_back(-1);
            n += 1;
        }
        n /= 2;
    }
    cout << ans.size() << nline;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " \n"[i + 1 == ans.size()];
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