class Solution {
  public:
    int maxDiffSum(vector<int>& nums) {
        // code here
        int n=nums.size();

        vector<vector<int>>dp(n,vector<int>(2,0));  // dp[i][0]---> maxsum with last element as nums[i] dp[i][1]--->last element as 1

        dp[0][0]=0;
        dp[0][1]=0;

        for(int i=1;i<n;i++){

            dp[i][0]=max(dp[i-1][1]+abs(nums[i]-1),dp[i-1][0]+abs(nums[i]-nums[i-1]));
            dp[i][1]=max(dp[i-1][1],dp[i-1][0]+abs(nums[i-1]-1));
        }


        return max(dp[n-1][0],dp[n-1][1]);
    }
};