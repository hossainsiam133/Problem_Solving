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
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<ll> rx, cx, temp;
    for (int i = 0; i < n; i++)
    {
        ll xrr = 0;
        for (int j = 0; j < m; j++)
        {
            xrr = (xrr ^ a[i][j]);
        }
        rx.push_back(xrr);
        temp.push_back(xrr);
    }
    for (int i = 0; i < m; i++)
    {
        ll xrc = 0;
        for (int j = 0; j < n; j++)
        {
            xrc = (xrc ^ a[j][i]);
        }
        cx.push_back(xrc);
        temp.push_back(xrc);
    }
    // sort(all(rx), greater<int>());
    // ll sum1 = 0;
    // ll sum2 = accumulate(all(rx), 0LL);
    // for (int i = 2; i < rx.size(); i++)
    // {
    //     sum1 += rx[i];
    // }
    // sum1 += (rx[0] ^ rx[1]);
    // cout << min(sum1, sum2) << nline;

    // for (auto it : rx)
    // {
    //     cout << it << ' ';
    // }
    ll ans1 = accumulate(all(rx), 0LL) + accumulate(all(cx), 0LL);
    ll r = max_element(all(rx)) - rx.begin();
    ll c = max_element(all(cx)) - cx.begin();
    vector<ll> rrx, ccx;
    for (int i = 0; i < n; i++)
    {
        rrx.push_back(rx[i] ^ a[i][c]);
    }
    for (int i = 0; i < n; i++)
    {
        ccx.push_back(cx[c] ^ a[i][c]);
    }
    sort(all(temp), greater<int>());
    ll ans2 = ans1;
    // cout<< temp[0] << nline;
    for (int i = 0; i < n; i++)
    {
        ll temp2 = ans1 - temp[0];
        // cout << temp2 << nline;
        ll cal = temp[1] - (rrx[i] ^ ccx[i]);
        // cout<< cal << ' ';
        temp2 -= cal;
        ans2 = min(ans2, temp2);
    }
    cout << min(ans1, ans2) << nline;
    // for (auto it : ccx)
    // {
    //     cout << it << ' ';
    // }
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