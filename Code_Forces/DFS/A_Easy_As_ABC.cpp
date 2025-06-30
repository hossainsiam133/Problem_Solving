#include <bits/stdc++.h>
using namespace std;

int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};
const int mx = 5;
char ch[mx][mx];
bool vis[mx][mx];
string str, ans = "~~~";
void dfs(int r, int c)
{
    vis[r][c] = true;
    str.push_back(ch[r][c]);

    if (str.size() == 3)
    {
        ans = min(ans, str);
        //cout << str << endl;
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            int x = r + dx[i];
            int y = c + dy[i];
            if (x >= 0 && x < 3 && y >= 0 && y < 3 && !vis[x][y])
            {
                dfs(x, y);
            }
        }
    }
    str.pop_back();
    vis[r][c] = false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char mn = '[';
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 3; j++)
        {
            ch[i][j] = s[j];
            mn = min(mn, ch[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (ch[i][j] == mn)
            {
                memset(vis, 0, sizeof(vis));
                str.clear();
                dfs(i, j);
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
