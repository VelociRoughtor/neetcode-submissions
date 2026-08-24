class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";

        for (char c : s) 
            if (isalnum(c)) 
                x.push_back(tolower(c));
    
        int n = x.size();

        for (int i = 0; i < n / 2; i++) 
            if (x[i] != x[n - i - 1]) 
                return false;

        return true;
    }
};