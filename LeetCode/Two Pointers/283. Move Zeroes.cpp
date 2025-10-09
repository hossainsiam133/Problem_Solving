// https : leetcode.com/problems/move-zeroes/description/?envType=problem-list-v2&envId=two-pointers
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

void moveZeroes(vector<int> &nums)
{
    int left = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] != 0)
        {
            swap(nums[left], nums[right]);
            left++;
        }
    }
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << ' ';
    // }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    vi v = {0, 1, 0, 3, 12};
    while (t--)
    {
        moveZeroes(v);
    }
    return 0;
}