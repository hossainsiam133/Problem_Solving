// https://lightoj.com/problem/calendars
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
    int nc;
    cin >> nc;
    int m[205][25];
    for (int i = 1; i <= nc; i++)
    {
        cin >> m[i][0];
        int sum = 0;
        for (int j = 1; j <= m[i][0]; j++)
        {
            cin >> m[i][j];
            sum += m[i][j];
        }
        m[i][m[i][0] + 1] = sum;
    }
    int q;
    cin >> q;
    for (int query = 1; query <= q; query++)
    {
        int cal1, cal2, day, month, year;
        cin >> cal1 >> cal2 >> day >> month >> year;
        int tot_days = m[cal1][m[cal1][0] + 1] * (year - 1);
        for (int j = 1; j <= month - 1; j++)
        {
            tot_days += m[cal1][j];
        }
        tot_days += day;
        int yy = tot_days / m[cal2][m[cal2][0] + 1];
        if (tot_days % m[cal2][m[cal2][0] + 1] != 0)
            yy += 1;
        tot_days = tot_days % m[cal2][m[cal2][0] + 1];
        if (tot_days == 0)
        {
            cout << "Query " << query << ": " << m[cal2][m[cal2][0]] << ' ' << m[cal2][0] << ' ' << yy << nline;
            continue;
        }
        int mm = -1, dd = -1;
        for (int j = 1; j <= m[cal2][0]; j++)
        {
            tot_days -= m[cal2][j];
            if (tot_days <= 0)
            {
                tot_days += m[cal2][j];
                dd = tot_days;
                mm = j;
                break;
            }
        }
        cout << "Query " << query << ": " << dd << ' ' << mm << ' ' << yy << nline;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}