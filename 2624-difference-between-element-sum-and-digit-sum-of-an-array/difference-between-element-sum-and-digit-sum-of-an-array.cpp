class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ans = 0;int res = 0 ; 
        for(auto a : nums){
            ans += a;
            int temp =a;
            while (temp>0){
                res+=temp%10;
                temp/=10;
            }
        }
        return ans - res;
    }
};