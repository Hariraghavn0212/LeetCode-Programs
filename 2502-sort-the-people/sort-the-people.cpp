class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string, greater<int>> s;
        vector<string> str;

        for(int i = 0; i < names.size(); i++) {
            s[heights[i]] = names[i];
        }

        for (auto a : s) {
            str.push_back(a.second);
        }

        return str;
    }
};