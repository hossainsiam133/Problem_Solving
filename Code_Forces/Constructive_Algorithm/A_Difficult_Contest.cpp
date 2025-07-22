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
    string s;
    cin >> s;
    if (s.find("FFT") == string::npos && s.find("NTT") == string::npos)
    {
        cout << s << nline;
    }
    else
    {
        string ans;
        int f = 0, n = 0, t = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'F' && s[i] != 'N' && s[i] != 'T')
            {
                ans.push_back(s[i]);
            }
            else
            {
                if (s[i] == 'F')
                    f++;
                else if (s[i] == 'N')
                    n++;
                else
                    t++;
            }
        }
        cout << string(t, 'T') << string(f, 'F') << string(n, 'N') << ans << nline;
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