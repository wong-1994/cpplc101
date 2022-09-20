/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        // if (x == 1)
        //     return 1;
        // int l = 0, r = x;
        // while((r - l) > 1)
        // {
        //     int n = (int)(l + (r - l) / 2);
        //     if (x / n < n)
        //         r = n;
        //     else if (x / n > n)
        //         l = n;
        //     else if (x / n == n)
        //         return n;
        // }
        // return l;
        long a = x;
        while (a * a > x)
        {
            a = (a  + x / a) / 2;
        }
        return a;
    }
};
// @lc code=end

