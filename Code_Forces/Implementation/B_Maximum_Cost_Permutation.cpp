// https://codeforces.com/contest/2144/problem/B
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
    int a[n];
    bool flag[n + 1];
    memset(flag, true, sizeof(flag));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        flag[a[i]] = false;
    }
    vector<int> rest;
    for (int i = 1; i <= n; i++)
    {
        if (flag[i])
            rest.push_back(i);
    }
    sort(all(rest), greater<int>());
    int j = 0;
    int k = rest.size() - 1;
    bool turn = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (turn)
            {
                a[i] = rest[j];
                j++;
                turn = false;
            }
            else
            {
                a[i] = rest[k];
                k--;
                turn = true;
            }
            // cout << i << ' ' << k << nline;
        }
    }
    // for (auto x : a)
    // {
    //     cout << x << ' ';
    // }
    // int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            j = i;
            break;
        }
        // if (a[i] != i + 1)
        //     ans++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != i + 1)
        {
            k = i;
            break;
        }
    }
    cout << k - j + 1 << nline;
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