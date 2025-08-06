// https://leetcode.com/problems/longest-increasing-subsequence/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// int MX = ;
int dp[3000];
    int func(vector<int> &arr, int n) {
        if(dp[n] != -1) return dp[n];
        int cnt = 1;
        for (int i = 0; i < n; i++) {
            if (arr[i] < arr[n]) {
                cnt = max(cnt, func(arr, i) + 1);
            }
        }
        dp[n] = cnt;
        return dp[n];
    }
    int lengthOfLIS(vector<int>& nums) { 
        memset(dp,-1,sizeof(dp));
        int ans = 0;
        for(int i =0;i < nums.size(); i++)
        {
            ans = max(ans,func(nums,i));
        }
        return ans; 
        }
};