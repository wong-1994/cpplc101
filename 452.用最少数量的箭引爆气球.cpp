/*
 * @lc app=leetcode.cn id=452 lang=cpp
 *
 * [452] 用最少数量的箭引爆气球
 */

// @lc code=start
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty())
        {
            return 0;
        }

        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1] < b[1];
        });

        int count = 1;
        int pos = points[0][1];
        for(const vector<int>& point : points)
        {
            if(point[0] > pos)
            {
                pos = point[1];
                count++;
            }
        }

        return count;
    }
};
// @lc code=end

