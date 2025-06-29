class Solution {
public:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[++left] != s[--right]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        while(left<right){
            if (s[left] != s[right]) return isPalindrome(s, left, right + 1) 
            || isPalindrome(s, left - 1, right);
            ++left; --right;
        }
        return true;
    }
};