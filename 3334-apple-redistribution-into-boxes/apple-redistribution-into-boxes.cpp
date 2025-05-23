class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int ans=0;
        int sum=0;

        for(int i=0;i<apple.size();i++){
            sum=sum+apple[i];
        }
        for (int i = capacity.size() - 1; i >= 0; i--) {
            ans++;
            sum =sum - capacity[i];
            if (sum <= 0) break;
        }
     return ans;
    }
};