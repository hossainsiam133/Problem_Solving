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

int dx[] = {0, 0, -1, +1};
int dy[] = {-1, +1, 0, 0};
const int N = 1e3 + 10;
int adj[N][N];
bool vis[N][N];
int n, m, sum;

void dfs(int r, int c)
{
    vis[r][c] = true;
    sum += adj[r][c];
    for (int i = 0; i < 4; i++)
    {
        int x = r + dx[i];
        int y = c + dy[i];
        if (x >= 1 && x <= n && y >= 1 && y <= m && vis[x][y] == false)
        {
            dfs(x, y);
        }
    }
    return;
}
void solve()
{
    cin >> n >> m;
    // memset(adj, 0, sizeof(adj));
    // memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> adj[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (adj[i][j] == 0)
                vis[i][j] = true;
            else
                vis[i][j] = false;
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (vis[i][j] == false)
            {
                sum = 0;
                dfs(i, j);
                ans = max(ans, sum);
            }
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
