class Solution {
public:
    bool isPalindrome(string s) {
         string strp{""};
        for (auto& c : s) {  
            if (isalnum(c)) strp += move(tolower(c)); 
        }
        int l = 0, r = strp.length() - 1;
        while (l < r) {
            if (strp[l] != strp[r]) return false;
            ++l;
            --r;
        }
        return true;
    }
};