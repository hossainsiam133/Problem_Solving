// https://leetcode.com/problems/min-cost-to-connect-all-points/description/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define nline '\n'
#define all(a) (a).begin(), (a).end()
#define mid(l, r) ((r + l) / 2)

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int manDis(vector<int> p1, vector<int> p2)
{
    return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]);
}
vector<int> par;
vector<int> sz;
int find_par(int u)
{
    if (par[u] == u)
        return u;
    return find_par(par[u]);
}
void Union(int u, int v)
{
    if (sz[u] < sz[v])
        swap(u, v);
    par[v] = u;
    sz[u] += sz[v];
}
int minCostConnectPoints(vector<vector<int> > &points)
{
    int n = points.size();
    vector<pair<int, pair<int, int> > > edge;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int w = manDis(points[i], points[j]);
            edge.push_back(make_pair(w, make_pair(i, j)));
        }
    }
    sort(all(edge));
    par.resize(n);
    sz.resize(n);
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
        sz[i] = 1;
    }
    int minCost = 0;
    for (int i = 0; i < edge.size(); i++)
    {
        int u = edge[i].S.F;
        int v = edge[i].S.S;
        int w = edge[i].F;
        u = find_par(u);
        v = find_par(v);
        if (u != v)
        {
            Union(u, v);
            minCost += w;
        }
        // cout<< edge[i].S.F << ' ' << edge[i].S.S << " Cost: " <<  edge[i].F << nline;
    }
    return minCost;
}
void solve()
{
    vector<vector<int> > points;
    points.PB({0, 0});
    points.PB({2, 2});
    points.PB({3, 10});
    points.PB({5, 2});
    points.PB({7, 0});
    cout << minCostConnectPoints(points);
}

int main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}