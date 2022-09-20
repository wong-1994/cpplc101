/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit = 0;
       int s = prices.size();
       if(s < 2)
       {
            return profit;
       }

       for(int i = 1; i < s; i++)
       {
            profit += max(0, prices[i] - prices[i - 1]);
       } 

       return profit;
    }
};
// @lc code=end

