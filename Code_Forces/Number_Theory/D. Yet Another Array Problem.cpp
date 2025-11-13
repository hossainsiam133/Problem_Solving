// https://codeforces.com/contest/2167/problem/D
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
const int mx = 1e2 + 123;
bitset<mx> isPrime;
vector<int> primes;
void seive(int N)
{
    isPrime[2] = true;
    for (int i = 3; i <= N; i += 2)
    {
        isPrime[i] = true;
    }
    for (int i = 3; i * i <= N; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vi ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= primes.size(); j++)
        {
            if (gcd(a[i], primes[j]) == 1)
            {
                ans.push_back(primes[j]);
            }
        }
    }
    cout<< *min_element(all(ans)) << nline;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive(100);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}