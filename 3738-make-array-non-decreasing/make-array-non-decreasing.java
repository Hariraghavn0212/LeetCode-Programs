class Solution {
    public int maximumPossibleSize(int[] nums) {
       int count = 0;
       int pre = -1;
       for(int num : nums){
       if(num>=pre)
       {
        pre = num;
        count++;
       }
    }
    return count;
}
}
