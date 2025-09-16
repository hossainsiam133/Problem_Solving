// https://codeforces.com/problemset/problem/1944/B
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
    n *= 2;
    k *= 2;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mpl, mpr, mp;
    for (int i = 0; i < n / 2; i++)
    {
        mpl[v[i]]++;
    }
    for (int i = n / 2; i < n; i++)
    {
        mpr[v[i]]++;
    }
    for (auto it : mpl)
    {
        if (mpr[it.first] == 1)
            mp[it.first] = 2;
        else
            mp[it.first] = 1;
    }
    for (auto it : mpr)
    {
        if (mpl[it.first] == 1)
            mp[it.first] = 2;
        else
            mp[it.first] = 1;
    }
    vector<int> l, r;
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            if (mpl[it.first] == 2)
            {
                l.push_back(it.first);
                l.push_back(it.first);
            }
            else
            {
                r.push_back(it.first);
                r.push_back(it.first);
            }
        }
    }
    for (auto it : mp)
    {
        if (it.second == 2)
        {
            l.push_back(it.first);
            r.push_back(it.first);
        }
        // cout << it.first << ' ' << it.second << nline;
    }

    // int lsz = l.size();
    // int rsz = r.size();
    // for (int i = 0; i < lsz; i++)
    // {
    //     cout << l[i] << " \n"[i + 1 == lsz];
    // }
    // for (int i = 0; i < rsz; i++)
    // {
    //     cout << r[i] << " \n"[i + 1 == rsz];
    // }
    for (int i = 0; i < k; i++)
    {
        cout << l[i] << " \n"[i + 1 == k];
    }
    for (int i = 0; i < k; i++)
    {
        cout << r[i] << " \n"[i + 1 == k];
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