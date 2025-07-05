#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define nline "\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
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
    map<char, int> mp;
    for (int i = 1; i < n - 1; i++)
    {
        mp[s[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second >= 2 || it.first == s[0] || it.first == s[n - 1])
        {
            Yes;
            return;
        }
    }
    No;
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