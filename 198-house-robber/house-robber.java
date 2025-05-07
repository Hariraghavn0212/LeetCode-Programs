class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        int[] dp = new int[n+1];
        Arrays.fill(dp,-1);
        return maxMoney(nums,0,dp);
    }
    public int maxMoney(int[] nums,int i,int[] dp){
        if(i >= nums.length){
            return 0;
        }

        if(dp[i] != -1){
            return dp[i];
        }


        return dp[i] = Math.max(maxMoney(nums,i+1,dp),nums[i] + maxMoney(nums,i+2,dp));
    }
}