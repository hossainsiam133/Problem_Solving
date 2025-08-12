// https://leetcode.com/problems/minimum-cost-for-tickets/submissions/1732103061/
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
int dp[400];
int func(vector<int> &days, vector<int> &costs, vector<int> &cnt, int i)
{
    if (i >= days.size())
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int ans = INT_MAX;
    for (int j = 0; j < 3; j++)
    {
        int d = days[i] + cnt[j] - 1;
        int l = i;
        while (l < days.size() && d >= days[l])
            l++;
        ans = min(ans, func(days, costs, cnt, l) + costs[j]);
    }
    return dp[i] = ans;
}
int mincostTickets(vector<int> &days, vector<int> &costs)
{
    memset(dp, -1, sizeof(dp));
    vector<int> cnt = {1, 7, 30};
    return func(days, costs, cnt, 0);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> days(n), costs(3);
    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> costs[i];
    }
    cout << mincostTickets(days, costs) << nline;
    return 0;
}