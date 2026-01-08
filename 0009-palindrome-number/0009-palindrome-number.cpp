/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        for (int i = 0; i < num.length(); i++){
            if (num[i] != num[num.length() - 1 - i]) return false;
        }
        return true;
    }
};
// @lc code=end

