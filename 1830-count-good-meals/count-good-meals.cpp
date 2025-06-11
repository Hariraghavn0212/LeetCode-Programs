class Solution {
public:
    int countPairs(vector<int>& arr) {
        int mod = 1000000007;
        unordered_map<int, int> map;
        int ans=0, n=arr.size();
        for(int i=0; i<n; i++){
            int power = 1;
            for(int j=0; j<22; j++){
                if(map.count(power-arr[i])){
                    ans += map[power-arr[i]];
                    ans %= mod;
                }
                power*=2;
            }
            map[arr[i]]++;
        }
        return ans;
    }
};