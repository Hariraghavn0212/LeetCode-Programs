class Solution {
public:
    int findComplement(int num) {
        bitset<32> binary(num);
        string str = binary.to_string();

        str.erase(0, str.find('1'));

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '1') {
                str[i] = '0';
            } else if (str[i] == '0') {
                str[i] = '1';
            }
        }

        return stoi(str, nullptr, 2);
    }
};