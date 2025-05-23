class Solution {
public:
    string truncateSentence(string s, int k) {
        int Count = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                Count++;
                if (Count == k) return s.substr(0, i);
            }
        }

        return s;
    }
};