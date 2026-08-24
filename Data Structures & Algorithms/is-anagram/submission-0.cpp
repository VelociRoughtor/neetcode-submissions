class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> mp;
        for (char x: s) mp[x]++;
        for (char x: t) {
            if (!mp.count(x) || mp[x] <= 0) return false;
            mp[x]--;
        }
        return true;
    }
};
