#include <bits/stdc++.h>
#define ll long long
#define Siam84                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
bool is_prime(ll n)
{
    if (n <= 1)
        return 0;
    else if (n == 2 or n == 3)
        return 1;
    else if (n % 2 == 0)
        return 0;
    else
        for (ll b = 3; b * b <= n; b += 2)
        {
            if (n % b == 0)
                return 0;
        }
    return 1;
}
string dtob(int n)
{
    string a = "";
    while (n)
        a += (n & 1) + '0', n >>= 1;
    reverse(a.begin(), a.end());
    return a;
}
void inverse(string &a)
{
    for (char &ch : a)
        ch = '1' - ch + '0';
}
ll btod(string a)
{
    ll n = a.size(), res = 0;
    for (int b = 0; b < n; b++)
    {
        res += (a[b] - '0') * (1 << (n - b - 1));
    }
    return res;
}
ll count1(int n)
{
    ll cnt = 0;
    while (n)
    {
        if (n & 1)
            cnt++;
        n >>= 1;
    }
    return cnt;
}
ll get(ll n, ll k)
{
    return ((n >> (k - 1)) & 1);
}
vector<ll> get_devisors(ll n)
{
    vector<ll> div;
    for (ll b = 1; b * b <= n; b++)
    {
        if (n % b == 0)
        {
            div.push_back(b);
            if (b * b != n)
                div.push_back(n / b);
        }
    }
    return div;
}
void prime_fact(ll n, map<ll, ll> &mp)
{
    while (n % 2 == 0)
        mp[2]++, n /= 2;
    for (ll b = 3; b * b <= n; b += 2)
    {
        while (n % b == 0)
            mp[b]++, n /= b;
    }
    if (n > 1)
        mp[n]++;
}
vector<bool> primes(1e7 + 2, true);
void seive(ll n)
{
    primes[0] = primes[1] = 0;
    primes[2] = 1;
    for (ll c = 2 * 2; c <= 1e7; c += 2)
        primes[c] = 0;
    for (ll b = 3; b * b <= 1e7; b += 2)
    {
        if (primes[b])
        {
            for (ll c = b * b; c <= 1e7; c += b)
                primes[c] = 0;
        }
    }
}
ll nCr(ll n, ll r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    ll res = 1;
    for (ll i = 1; i <= r; ++i)
        res *= (n - r + i) / i;
    return res;
}
ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}
void set_bit_1(ll &n, ll k)
{
    n = n | (1 << k - 1);
}
void reset_bit(ll &n, ll k)
{
    int s = 1 << (k - 1);
    n &= ~s;
}
bool is_pow_of_two(ll n)
{
    if (n <= 0)
        return 0;
    return !(n & (n - 1));
}
vector<ll> spf(1e6 + 5, 1);
void prime_fact_with_seive()
{
    for (ll b = 2; b <= 1e6; b++)
    {
        if (spf[b] == 1)
        {
            for (int c = b; c <= 1e6; c += b)
                spf[c] = b;
        }
    }
}
void get_prime_fact(ll n, map<ll, ll> &mp)
{
    while (n != 1)
    {
        mp[spf[n]]++;
        n /= spf[n];
    }
}
ll fast_pow(ll base, ll power, ll mod = LLONG_MAX)
{
    if (power == 0)
        return 1;
    ll res = 1, n = base;
    while (power)
    {
        if (power & 1)
            res *= base, power--;
        if ((power & 1) == 0)
            power /= 2, base *= base;
        res %= mod;
        base %= mod;
    }
    return res;
}
ll sum_digits(ll a)
{
    ll s = 0;
    while (a)
        s += a % 10, a /= 10;
    return s;
}
int main()
{
    Siam84;
    int t;
    cin >> t;
    while (t--)
    {
        ll x, m;
        cin >> x >> m;
        ll limit = log2(x);
        limit++;
        ll n = (1 << limit) - 1;
        n = min(n, m);
        
        ll cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i == x)
                continue;
            ll exor = (x xor i);
            // if()
            // cout << x << " xor " << i << " = " << exor << endl;
            if (x % exor == 0 || i % exor == 0)
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
