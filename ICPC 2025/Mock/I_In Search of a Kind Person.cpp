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

void solve(int test)
{
    int n;
    cin >> n;
    int a[n + 1];
    a[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> left, right;
    int cmp = 0;
    for (int i = 1; i <= n; i++)
    {
        cmp = max(cmp, a[i - 1]);
        left.push_back(cmp);
    }
    right.push_back(INT_MAX);
    cmp = INT_MAX;
    for (int i = n - 1; i >= 1; i--)
    {
        cmp = min(cmp, a[i + 1]);
        right.push_back(cmp);
    }
    reverse(all(right));
    int it = -1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > left[i - 1] && a[i] < right[i - 1])
        {
            it = i;
            break;
        }
    }
    cout << "Case " << test << ": ";
    if (it == -1)
        cout << "Humanity is doomed!" << nline;
    else
        cout << it << nline;
    // for (auto it : left)
    //     cout << it << ' ';
    // cout<< nline;
    // for (auto it : right)
    //     cout << it << ' ';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}