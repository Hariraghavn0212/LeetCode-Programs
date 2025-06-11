class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double,long long> ratioCount;
        long long ans = 0;
        for(auto & rect : rectangles){
            double ratio = (double) rect[0]/rect[1];
            ans+= ratioCount[ratio];
            ratioCount[ratio]++;
        }
        return ans;
    }
};