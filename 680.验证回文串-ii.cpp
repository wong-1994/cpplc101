/*
 * @lc app=leetcode.cn id=680 lang=cpp
 *
 * [680] 验证回文串 II
 */

// @lc code=start
#include <string>
using namespace std;

class Solution {
public:
    bool checkPalindrome(const string& s, int high, int low)
    {
        for (int i = low, j = high; i < j; ++i, --j)
        {
            if (s[i] != s[j])
                return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while(left < right)
        {
            if(s[left] == s[right])
            {
                --right;
                ++left;
            }
            else
                return checkPalindrome(s, right-1, left) || checkPalindrome(s, right, left+1);
        }
        return true;
    }
};
// @lc code=end

