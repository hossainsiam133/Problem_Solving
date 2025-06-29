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
    vector<char> even, odd;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            odd.push_back(s[i]);
        else
            even.push_back(s[i]);
    }
    if (k % 2 == 0)
    {
        sort(s.begin(), s.end());
        cout << s << nline;
    }
    else
    {
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        int ev = 0, od = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << odd[od];
                od++;
            }
            else
            {
                cout << even[ev];
                ev++;
            }
        }
        cout << nline;
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