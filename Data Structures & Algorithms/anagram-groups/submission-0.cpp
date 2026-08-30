class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char, int>, vector<string>> mp;
        for (auto s: strs) {
            map<char, int> tmp;
            for (char x: s) tmp[x]++;
            mp[tmp].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto [a, b]: mp) {
            ans.push_back(b);
        }
        return ans;
    }
};
