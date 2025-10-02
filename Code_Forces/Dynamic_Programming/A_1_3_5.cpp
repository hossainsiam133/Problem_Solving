// https://codeforces.com/problemset/problem/1958/A
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
    vector<int> a3, a5;
    for (int i = 1; i <= 35; i++)
    {
        a3.push_back(i * 3);
    }
    for (int i = 1; i <= 25; i++)
    {
        a5.push_back(i * 5);
    }
    int ans = min(n % 3, n % 5);
    for (int i = 0; i < a3.size(); i++)
    {
        for (int j = 0; j < a5.size(); j++)
        {
            int sum = a3[i] + a5[j];
            ans = min(ans, n % sum);
        }
    }
    cout << ans << nline;
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