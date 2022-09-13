/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = 0;
        int s = flowerbed.size();

        if (s == 1)
        {
            if(flowerbed[0] == 0)
                return n <= 1;
            else 
                return n == 0;
        }

        if(flowerbed[0]==0 && flowerbed[1]==0)
        {
            flowerbed[0] = 1;
            m ++;
        }

        for(int i = 1; i < s - 2; i++)
        {
            if(flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0 && flowerbed[i] == 0)
            {
                flowerbed[i] = 1;
                m ++;
            }
        }

        if(flowerbed[s - 1] == 0 && flowerbed[s - 2] ==0)
        {
            flowerbed[s - 1] = 1;
            m++;
        }

        return n <= m;
    }
};
// @lc code=end

