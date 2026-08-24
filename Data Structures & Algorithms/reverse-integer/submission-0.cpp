class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        if(s[0] == '-') std::reverse(s.begin() + 1, s.end());
        else std::reverse(s.begin(), s.end());
        long long val = stoll(s);
        if(val > INT_MAX || val < INT_MIN) return 0;
        return (int)val;
    }
};
