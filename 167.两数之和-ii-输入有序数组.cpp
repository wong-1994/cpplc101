/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        int sum;

        while(l < r)
        {
            sum = numbers[l] + numbers[r]; 
            if(sum == target)
                break;
            if(sum < target)
                l++;
            else r--;
        }

        return vector<int>{l + 1, r + 1};
    }
};
// @lc code=end

