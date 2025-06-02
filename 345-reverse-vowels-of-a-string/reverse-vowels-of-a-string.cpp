class Solution {
public:
    string reverseVowels(string s) {
        
        string st = s;
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        
        
        while (start < end) {
            
            while (start < end && vowels.find(st[start]) == string::npos) {
                start++;
            }
            
            
            while (start < end && vowels.find(st[end]) == string::npos) {
                end--;
            }
            
            
            swap(st[start], st[end]);
            
            
            start++;
            end--;
        }
        
        
        return st;
    }
};